
@.str = private unnamed_addr constant [3 x i8] c"%d\00", align 1, !dbg !0

define dso_local i32 @ft_isalpha(i32 noundef %0) #0 !dbg !18 {
  %2 = alloca i32, align 4
  %3 = alloca i32, align 4
  store i32 %0, ptr %3, align 4
  call void @llvm.dbg.declare(metadata ptr %3, metadata !23, metadata !DIExpression()), !dbg !24
  %4 = load i32, ptr %3, align 4, !dbg !25
  %5 = icmp sgt i32 %4, 64, !dbg !27
  br i1 %5, label %6, label %9, !dbg !28

6:                                                ; preds = %1
  %7 = load i32, ptr %3, align 4, !dbg !29
  %8 = icmp slt i32 %7, 91, !dbg !30
  br i1 %8, label %15, label %9, !dbg !31

9:                                                ; preds = %6, %1
  %10 = load i32, ptr %3, align 4, !dbg !32
  %11 = icmp sgt i32 %10, 96, !dbg !33
  br i1 %11, label %12, label %16, !dbg !34

12:                                               ; preds = %9
  %13 = load i32, ptr %3, align 4, !dbg !35
  %14 = icmp sle i32 %13, 122, !dbg !36
  br i1 %14, label %15, label %16, !dbg !37

15:                                               ; preds = %12, %6
  store i32 1, ptr %2, align 4, !dbg !38
  br label %17, !dbg !38

16:                                               ; preds = %12, %9
  store i32 0, ptr %2, align 4, !dbg !39
  br label %17, !dbg !39

17:                                               ; preds = %16, %15
  %18 = load i32, ptr %2, align 4, !dbg !40
  ret i32 %18, !dbg !40
}

declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

define dso_local i32 @main() #0 !dbg !41 {
  %1 = alloca i32, align 4
  %2 = alloca i8, align 1
  store i32 0, ptr %1, align 4
  call void @llvm.dbg.declare(metadata ptr %2, metadata !44, metadata !DIExpression()), !dbg !45
  store i8 49, ptr %2, align 1, !dbg !45
  %3 = load i8, ptr %2, align 1, !dbg !46
  %4 = sext i8 %3 to i32, !dbg !46
  %5 = call i32 @ft_isalpha(i32 noundef %4), !dbg !47
  %6 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %5), !dbg !48
  ret i32 0, !dbg !49
}

declare i32 @printf(ptr noundef, ...) #2

attributes #0 = { noinline nounwind optnone uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #1 = { nocallback nofree nosync nounwind readnone speculatable willreturn }
attributes #2 = { "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }

# Generated by Django 5.0.6 on 2024-06-27 01:47

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('mainapp', '0002_remove_customuser_image_profile_and_more'),
    ]

    operations = [
        migrations.AddField(
            model_name='customuser',
            name='image_profile',
            field=models.ImageField(blank=True, null=True, upload_to='profile_images/'),
        ),
    ]

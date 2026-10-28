// rea decompile_all
// name: FUN_03fa5e50
// address: 0x3fa5e50
// body: available
// range: 0x3fa5e50-0x3fa6553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fa5e50(int param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *local_88;
  ulong uStack_80;
  long *local_78;
  ulong uStack_70;
  long *local_68;
  long *local_60;
  ulong uStack_58;
  long *local_50;
  int local_44;
  long local_40;
  long *local_38;
  int local_28;
  undefined1 auStack_24 [4];
  
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  plVar4 = (long *)FUN_03f5da68();
  if (plVar4 != (long *)0x0) {
    iVar3 = (**(code **)*plVar4)(plVar4,&DAT_023abcf8,&local_78);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*local_78 + 0x18))(local_78,&local_88);
      (**(code **)(*local_78 + 0x10))();
      if ((-1 < iVar3) && (local_88 != (long *)0x0)) {
        iVar3 = (**(code **)*local_88)(local_88,&DAT_023abcd8,&local_38);
        (**(code **)(*local_88 + 0x10))();
        if (-1 < iVar3) {
          lVar5 = (**(code **)(*local_38 + 0x18))();
          (**(code **)(*local_38 + 0x10))();
          (**(code **)(*plVar4 + 0x10))(plVar4);
          if (lVar5 != 0) goto LAB_03fa64a0;
        }
      }
    }
    local_78 = (long *)0x0;
    uStack_70 = 0;
    local_68 = (long *)0x0;
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,&local_88,auStack_24,&local_38,&local_40);
    if (-1 < iVar3) {
      local_28 = 0;
      local_44 = 0;
      if (local_88 != (long *)0x0) {
        FUN_03f897cc(local_88,&local_28);
      }
      if (local_38 != (long *)0x0) {
        FUN_03f897cc(local_38,&local_44);
      }
      FUN_03fa9220(&local_78,local_88,(long)local_28);
      if (0 < local_44) {
        FUN_03fa9220(&local_78,&DAT_023abd38,1);
        FUN_03fa9220(&local_78,local_38,(long)local_44);
      }
      if (local_88 != (long *)0x0) {
        FUN_03f896dc();
      }
      if (local_38 != (long *)0x0) {
        FUN_03f896dc();
      }
      if (local_40 != 0) {
        FUN_03f896dc();
      }
    }
    if (((ulong)local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 < -0x7ff8fffb) {
    if (-0x7fffbffe < param_1) {
      if (param_1 == -0x7fffbffd) {
        uStack_70 = (ulong)((byte)local_60 >> 1);
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        uVar6 = FUN_03fb4dc4();
        lVar5 = FUN_03fa65cc(uVar6,"System","NullReferenceException",&local_78);
        goto LAB_03fa64a0;
      }
      if (param_1 == -0x7fffbffb) {
        uVar1 = (ulong)((byte)local_60 >> 1);
        if (((ulong)local_60 & 1) != 0) {
          uVar1 = uStack_58;
        }
        if (uVar1 == 0) {
          FUN_03f922d0(&local_78,"Unspecified error");
          if (((ulong)local_60 & 1) != 0) {
            operator_delete(local_50);
          }
          uStack_58 = uStack_70;
          local_60 = local_78;
          local_50 = local_68;
        }
        uVar6 = FUN_03fb4dc4();
        uStack_70 = (ulong)local_60 >> 1 & 0x7f;
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        lVar5 = FUN_03fa65cc(uVar6,"System.Runtime.InteropServices","COMException",&local_78);
        *(undefined4 *)(lVar5 + 0x60) = 0x80004005;
        goto LAB_03fa64a0;
      }
      if (param_1 == -0x7ff8fffe) {
        uStack_70 = (ulong)((byte)local_60 >> 1);
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        uVar6 = FUN_03fb4dc4();
        lVar5 = FUN_03fa65cc(uVar6,"System.IO","FileNotFoundException",&local_78);
        goto LAB_03fa64a0;
      }
      goto LAB_03fa64c8;
    }
    if (param_1 != -0x7fffffed) {
      if (param_1 == -0x7fffbfff) {
        uVar6 = FUN_03fb4dc4();
        uStack_70 = (ulong)local_60 >> 1 & 0x7f;
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        lVar5 = FUN_03fa65cc(uVar6,"System","NotImplementedException",&local_78);
        goto LAB_03fa64a0;
      }
      if (param_1 == -0x7fffbffe) {
        uStack_70 = (ulong)((byte)local_60 >> 1);
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        uVar6 = FUN_03fb4dc4();
        lVar5 = FUN_03fa65cc(uVar6,"System","InvalidCastException",&local_78);
        goto LAB_03fa64a0;
      }
      goto LAB_03fa64c8;
    }
LAB_03fa61d0:
    uVar6 = FUN_03fb4dc4();
    uStack_70 = (ulong)local_60 >> 1 & 0x7f;
    local_78 = (long *)((ulong)&local_60 | 2);
    if (((ulong)local_60 & 1) != 0) {
      uStack_70 = uStack_58;
      local_78 = local_50;
    }
    lVar5 = FUN_03fa65cc(uVar6,"System","ObjectDisposedException",&local_78);
  }
  else {
    if (param_1 < -0x7feceac7) {
      if (param_1 == -0x7ff8fffb) {
        uStack_70 = (ulong)((byte)local_60 >> 1);
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        uVar6 = FUN_03fb4dc4();
        lVar5 = FUN_03fa65cc(uVar6,"System","UnauthorizedAccessException",&local_78);
        goto LAB_03fa64a0;
      }
      if (param_1 == -0x7ff8fff2) {
        uStack_70 = (ulong)((byte)local_60 >> 1);
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        uVar6 = FUN_03fb4dc4();
        lVar5 = FUN_03fa65cc(uVar6,"System","OutOfMemoryException",&local_78);
        goto LAB_03fa64a0;
      }
      if (param_1 == -0x7ff8ffa9) {
        local_78 = (long *)0x0;
        uStack_70 = 0;
        uStack_80 = (ulong)((byte)local_60 >> 1);
        local_88 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_80 = uStack_58;
          local_88 = local_50;
        }
        lVar5 = FUN_03fa6614(&local_78,&local_88);
        goto LAB_03fa64a0;
      }
    }
    else {
      if (param_1 == -0x7feceac7) {
        uVar7 = (ulong)((byte)local_60 >> 1);
        uVar1 = uVar7;
        if (((ulong)local_60 & 1) != 0) {
          uVar1 = uStack_58;
        }
        bVar2 = (byte)local_60;
        if (uVar1 == 0) {
          FUN_03f922d0(&local_78,"Operation is not supported on this platform.");
          if (((ulong)local_60 & 1) != 0) {
            operator_delete(local_50);
          }
          uStack_58 = uStack_70;
          local_60 = local_78;
          plVar4 = local_60;
          local_60._0_1_ = (byte)local_78;
          local_50 = local_68;
          uVar7 = (ulong)((byte)local_60 >> 1);
          bVar2 = (byte)local_60;
          local_60 = plVar4;
        }
        local_78 = (long *)((ulong)&local_60 | 2);
        uStack_70 = uVar7;
        if ((bVar2 & 1) != 0) {
          local_78 = local_50;
          uStack_70 = uStack_58;
        }
        uVar6 = FUN_03fb4dc4();
        lVar5 = FUN_03fa65cc(uVar6,"System","PlatformNotSupportedException",&local_78);
        goto LAB_03fa64a0;
      }
      if (param_1 == -0x7feceac5) {
        uVar6 = FUN_03fb4dc4();
        uStack_70 = (ulong)local_60 >> 1 & 0x7f;
        local_78 = (long *)((ulong)&local_60 | 2);
        if (((ulong)local_60 & 1) != 0) {
          uStack_70 = uStack_58;
          local_78 = local_50;
        }
        lVar5 = FUN_03fa65cc(uVar6,"System","OperationCanceledException",&local_78);
        goto LAB_03fa64a0;
      }
      if (param_1 == -0x7fece9de) goto LAB_03fa61d0;
    }
LAB_03fa64c8:
    if ((param_2 & 1) == 0) {
      uVar6 = FUN_03fb4dc4();
      uStack_80 = (ulong)local_60 >> 1 & 0x7f;
      local_88 = (long *)((ulong)&local_60 | 2);
      if (((ulong)local_60 & 1) != 0) {
        uStack_80 = uStack_58;
        local_88 = local_50;
      }
      lVar5 = FUN_03fa65cc(uVar6,"System","Exception",&local_88);
    }
    else {
      uVar6 = FUN_03fb4dc4();
      uStack_70 = (ulong)local_60 >> 1 & 0x7f;
      local_78 = (long *)((ulong)&local_60 | 2);
      if (((ulong)local_60 & 1) != 0) {
        uStack_70 = uStack_58;
        local_78 = local_50;
      }
      lVar5 = FUN_03fa65cc(uVar6,"System.Runtime.InteropServices","COMException",&local_78);
    }
  }
  *(int *)(lVar5 + 0x60) = param_1;
LAB_03fa64a0:
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  return lVar5;
}


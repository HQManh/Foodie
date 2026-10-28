// rea decompile_all
// name: System.TimeZoneInfo$$EnumerateFilesRecursively
// address: 0x750efc0
// body: available
// range: 0x750efc0-0x750f3a3 inclusive
// range: 0x750f3a8-0x750f3ab inclusive
// range: 0x750f3b0-0x750f3b3 inclusive
// range: 0x750f40c-0x750f45f inclusive
// range: 0x750f4f4-0x750f51b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750f3a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f3a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f454 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f458 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x750f45c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0750f458) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_TimeZoneInfo__EnumerateFilesRecursively(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_100;
  long *plStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if ((DAT_095216db & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b05d8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09191e88);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216db = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = SystemNative_GetReadDirRBufferSize(0);
  plStack_f8 = &local_68;
  local_68 = 0;
  local_100 = 0;
  if (*(int *)(DAT_09175020 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = DAT_09197190;
  lVar5 = *(long *)(DAT_09197190 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(lVar6 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  plVar7 = (long *)**(long **)(lVar6 + 0xb8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_68 = (**(code **)(*plVar7 + 0x178))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x180));
  if (local_68 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(int *)(local_68 + 0x18) != 0) {
      lVar6 = local_68 + 0x20;
    }
  }
  lVar5 = 0;
  do {
    if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_70 = Interop_Sys__OpenDir(param_1,0);
    if (local_70 == 0) {
      lVar6 = thunk_FUN_03fc39d4(&DAT_09191e88);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = Interop_Sys__GetLastErrorInfo(0);
      uVar10 = Interop__GetExceptionForIoErrno(uVar10,param_1,1,0);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091db738);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar10,uVar11);
    }
    do {
      while( true ) {
        do {
          lVar8 = local_70;
          if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar4 = SystemNative_ReadDirR(lVar8,lVar6,uVar3,&local_80,0);
          if (iVar4 != 0) {
            iVar4 = 0x12;
            goto LAB_0750f32c;
          }
          if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = System_TimeZoneInfo__GetDirectoryEntryFullPath(&local_80,param_1);
        } while (lVar8 == 0);
        if ((uStack_78._4_4_ != 0) && (uStack_78._4_4_ != 10)) break;
        if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar4 = Interop_Sys__Stat(lVar8,&local_f0,0);
        if ((iVar4 < 0) || ((local_f0._4_4_ & 0xf000) != 0x4000)) goto LAB_0750f26c;
LAB_0750f28c:
        if (lVar5 == 0) {
          lVar5 = thunk_FUN_03f9944c(DAT_0917cce8);
          FUN_057e0400(lVar5,DAT_091b0558);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        lVar2 = DAT_091b0570;
        lVar12 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar8;
          thunk_FUN_03f5d7b8(plVar7,lVar8);
        }
        else {
          FUN_057e0c68(lVar5,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      if (uStack_78._4_4_ == 4) goto LAB_0750f28c;
LAB_0750f26c:
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),lVar8,*(undefined8 *)(param_2 + 0x28));
    } while ((uVar9 & 1) == 0);
    iVar4 = 0x11;
LAB_0750f32c:
    lVar8 = local_70;
    if (local_70 != 0) {
      if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Interop_Sys__CloseDir(lVar8,0);
    }
    if ((((iVar4 != 0x12) && (iVar4 != 0)) || (lVar5 == 0)) || (*(int *)(lVar5 + 0x18) == 0)) {
      FUN_03eaae2c(&local_100);
      return;
    }
    param_1 = FUN_057e0998(lVar5,*(int *)(lVar5 + 0x18) + -1,DAT_091b0610);
    FUN_057e251c(lVar5,*(int *)(lVar5 + 0x18) + -1,DAT_091b05d8);
  } while( true );
}


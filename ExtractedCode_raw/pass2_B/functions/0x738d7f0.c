// rea decompile_all
// name: MessagePack.MessagePackReader$$ReadStringSlow
// address: 0x738d7f0
// body: available
// range: 0x738d7f0-0x738dcdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738da48 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738db08 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738dccc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738dcd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738dcd4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738dcd8 to 0x738e178 MessagePack.MessagePackReader$$ThrowNotEnoughBytesException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_MessagePackReader__ReadStringSlow(long param_1,uint param_2)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long local_70;
  ulong uStack_68;
  
  uVar12 = (ulong)param_2;
  if ((DAT_09520aa1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197198);
    FUN_03f5c2a4(&DAT_09175028);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091d3520);
    FUN_03f5c2a4(&DAT_091b9768);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9fe8);
    FUN_03f5c2a4(&DAT_091b9ff8);
    FUN_03f5c2a4(&DAT_0918b398);
    DAT_09520aa1 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  lVar6 = FUN_06097630(param_1,DAT_091b9fe8);
  if (lVar6 < (long)uVar12) {
                    /* WARNING: Subroutine does not return */
    MessagePack_MessagePackReader__ThrowNotEnoughBytesException();
  }
  if ((int)param_2 < 0) {
LAB_0738dcbc:
    uVar10 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,DAT_091d3520);
  }
  if (*(int *)(DAT_0918b398 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar7 = (long *)**(long **)(DAT_0918b398 + 0xb8);
  if (plVar7 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar7 + 0x358))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x360));
    if (*(int *)(DAT_09175028 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09175028);
    }
    lVar6 = DAT_09197198;
    lVar8 = *(long *)(DAT_09197198 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
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
    if (plVar7 != (long *)0x0) {
      lVar6 = (**(code **)(*plVar7 + 0x178))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x180));
      plVar7 = (long *)**(long **)(DAT_0918b398 + 0xb8);
      if (plVar7 != (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x328))(plVar7,*(undefined8 *)(*plVar7 + 0x330));
        if (param_2 == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            lVar8 = DAT_091b9ff8;
            lVar9 = *(long *)(DAT_091b9ff8 + 0x20);
            uVar2 = *(ushort *)(lVar9 + 0x135);
            if ((uVar2 & 1) == 0) {
              FUN_03f95a6c();
              lVar9 = *(long *)(lVar8 + 0x20);
              uVar2 = *(ushort *)(lVar9 + 0x135);
            }
            lVar1 = *(long *)(param_1 + 0x60);
            uVar10 = *(undefined8 *)(param_1 + 0x68);
            if ((uVar2 & 1) == 0) {
              FUN_03f95a6c();
              lVar9 = *(long *)(lVar8 + 0x20);
              uVar2 = *(ushort *)(lVar9 + 0x135);
            }
            uVar11 = *(uint *)(param_1 + 0x70);
            if ((uVar2 & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            uVar14 = (uint)uVar10;
            if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
            }
            if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0xe0) + 0x20) + 0x135) &
                1) == 0) {
              FUN_03f95a6c();
            }
            uVar15 = (ulong)(uVar14 - uVar11);
            local_70 = lVar1 + (int)uVar11;
            uStack_68 = uVar15;
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar4 = System_Math__Min(uVar12,uVar15,0);
            lVar8 = DAT_091b9ff8;
            if (0x7fffffff < (long)(uVar12 - (long)iVar4)) goto LAB_0738dcbc;
            lVar9 = *(long *)(DAT_091b9ff8 + 0x20);
            uVar2 = *(ushort *)(lVar9 + 0x135);
            if ((uVar2 & 1) == 0) {
              FUN_03f95a6c();
              lVar9 = *(long *)(lVar8 + 0x20);
              uVar2 = *(ushort *)(lVar9 + 0x135);
            }
            lVar1 = *(long *)(param_1 + 0x60);
            uVar10 = *(undefined8 *)(param_1 + 0x68);
            if ((uVar2 & 1) == 0) {
              FUN_03f95a6c();
              lVar9 = *(long *)(lVar8 + 0x20);
              uVar2 = *(ushort *)(lVar9 + 0x135);
            }
            uVar11 = *(uint *)(param_1 + 0x70);
            if ((uVar2 & 1) == 0) {
              lVar9 = FUN_03f95a6c();
            }
            uVar14 = (uint)uVar10;
            if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
              System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
            }
            if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0xe0) + 0x20) + 0x135) &
                1) == 0) {
              FUN_03f95a6c();
            }
            local_70 = lVar1 + (int)uVar11;
            uStack_68 = (ulong)(uVar14 - uVar11);
            uVar10 = FUN_05ff5c10(&local_70,DAT_091b9768);
            if (lVar6 == 0) goto LAB_0738dcd0;
            uVar11 = (uint)*(undefined8 *)(lVar6 + 0x18);
            if (uVar11 < uVar13 || uVar11 - uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar8 = (long)(int)uVar13;
            if ((int)uVar11 - lVar8 != (long)(int)((int)uVar11 - lVar8)) goto LAB_0738dcbc;
            if (plVar7 == (long *)0x0) goto LAB_0738dcd0;
            uVar14 = (int)uVar12 - iVar4;
            uVar12 = (ulong)uVar14;
            iVar5 = (**(code **)(*plVar7 + 0x1d8))
                              (plVar7,uVar10,iVar4,lVar6 + 0x20 + lVar8 * 2,uVar11 - uVar13,
                               uVar14 == 0,*(undefined8 *)(*plVar7 + 0x1e0));
            if (lVar8 + iVar5 != (long)(int)(lVar8 + iVar5)) goto LAB_0738dcbc;
            uVar13 = iVar5 + uVar13;
            FUN_042658c0(param_1,(long)iVar4,DAT_091b9f90);
          } while (0 < (int)uVar14);
        }
        uVar10 = System_String__CreateString(0,lVar6,0,uVar13,0);
        if (*(int *)(DAT_09175028 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09175028);
        }
        lVar8 = DAT_09197198;
        lVar9 = *(long *)(DAT_09197198 + 0x20);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03f95a6c();
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_03f95a6c();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = *(long *)(lVar8 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        plVar7 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x188))(plVar7,lVar6,0,*(undefined8 *)(*plVar7 + 400));
          return uVar10;
        }
      }
    }
  }
LAB_0738dcd0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


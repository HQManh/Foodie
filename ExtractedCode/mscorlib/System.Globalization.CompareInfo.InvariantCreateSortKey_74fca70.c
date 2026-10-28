// rea decompile_all
// name: System.Globalization.CompareInfo$$InvariantCreateSortKey
// address: 0x74fca70
// body: available
// range: 0x74fca70-0x74fcd0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74fcd04 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74fcd08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_CompareInfo__InvariantCreateSortKey(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  
  if ((DAT_09521655 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00c8);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_0918ae78);
    DAT_09521655 = 1;
  }
  lVar4 = DAT_091c00c8;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09222fa8);
    System_ArgumentNullException___ctor(uVar6,uVar5,0);
  }
  else {
    if ((param_3 & 0xdfffffe0) == 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        lVar8 = *(long *)(DAT_091c00c8 + 0x38);
        if (lVar8 == 0) {
          FUN_03f95ac8(DAT_091c00c8);
          lVar8 = *(long *)(lVar4 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = **(long **)(lVar4 + 0xb8);
      }
      else {
        lVar4 = FUN_03f5c394(DAT_0917fc88,*(int *)(param_2 + 0x10) << 1);
        iVar3 = thunk_FUN_03f68190(0);
        if (lVar4 == 0) {
          if ((param_3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar9 = (ushort *)0x0;
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x18);
          puVar9 = (ushort *)0x0;
          if (iVar1 != 0) {
            puVar9 = (ushort *)(lVar4 + 0x20);
          }
          if ((param_3 & 1) == 0) {
            System_Buffer__MemoryCopy(param_2 + iVar3,puVar9,(long)iVar1,(long)iVar1,0);
            goto LAB_074fcc18;
          }
        }
        if (0 < *(int *)(param_2 + 0x10)) {
          uVar10 = 0;
          do {
            uVar2 = System_String__get_Chars(param_2,uVar10 & 0xffffffff,0);
            if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091827f8);
            }
            iVar3 = *(int *)(param_2 + 0x10);
            uVar10 = uVar10 + 1;
            if (0xffffffe5 < uVar2 - 0x7b) {
              uVar2 = uVar2 - 0x20;
            }
            *puVar9 = uVar2;
            puVar9 = puVar9 + 1;
          } while ((long)uVar10 < (long)iVar3);
        }
      }
LAB_074fcc18:
      uVar5 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      uVar6 = thunk_FUN_03f9944c(DAT_0918ae78);
      System_Globalization_SortKey___ctor(uVar6,uVar5,param_2,param_3,lVar4,0);
      return uVar6;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar6 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09212ce8);
    uVar7 = thunk_FUN_03fc39d4(&DAT_092206f0);
    System_ArgumentException___ctor(uVar6,uVar5,uVar7,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c5220);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar5);
}


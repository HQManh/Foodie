// rea decompile_all
// name: System.Collections.Stack$$CopyTo
// address: 0x7558040
// body: available
// range: 0x7558040-0x75582f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75581d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75581dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75581e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75582f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Stack__CopyTo(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  
  if ((DAT_09521969 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_09521969 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar7,uVar5,0);
  }
  else {
    iVar2 = System_Array__get_Rank(param_2,0);
    if (iVar2 == 1) {
      if ((int)param_3 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar7 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_0921d350);
        uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
        System_ArgumentOutOfRangeException___ctor(uVar7,uVar5,uVar6,0);
      }
      else {
        iVar2 = System_Array__get_Length(param_2,0);
        if (*(int *)(param_1 + 0x18) <= (int)(iVar2 - param_3)) {
          plVar3 = (long *)thunk_FUN_03f99350(param_2,DAT_09180318);
          uVar1 = *(uint *)(param_1 + 0x18);
          uVar8 = (ulong)uVar1;
          if (plVar3 == (long *)0x0) {
            if (0 < (int)uVar1) {
              iVar2 = 0;
              iVar11 = -1;
              do {
                lVar10 = *(long *)(param_1 + 0x10);
                if (lVar10 == 0) goto LAB_075581dc;
                uVar1 = (int)uVar8 + iVar11;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_075581d8;
                System_Array__SetValue
                          (param_2,*(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20),
                           param_3 + iVar2,0);
                uVar8 = (ulong)*(uint *)(param_1 + 0x18);
                iVar2 = iVar2 + 1;
                iVar11 = iVar11 + -1;
              } while (iVar2 < (int)*(uint *)(param_1 + 0x18));
            }
          }
          else if (0 < (int)uVar1) {
            lVar12 = (ulong)param_3 << 0x20;
            lVar10 = 0;
            iVar2 = -1;
            do {
              lVar9 = *(long *)(param_1 + 0x10);
              if (lVar9 == 0) {
LAB_075581dc:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar1 = (int)uVar8 + iVar2;
              if (*(uint *)(lVar9 + 0x18) <= uVar1) {
LAB_075581d8:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar9 = *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              if ((lVar9 != 0) &&
                 (lVar4 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
                uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar5,0);
              }
              if ((ulong)*(uint *)(plVar3 + 3) <= (ulong)param_3 + lVar10) goto LAB_075581d8;
              *(long *)((long)plVar3 + (lVar12 >> 0x1d) + 0x20) = lVar9;
              thunk_FUN_03f5d7b8((long)plVar3 + (lVar12 >> 0x1d) + 0x20,lVar9);
              uVar8 = (ulong)*(int *)(param_1 + 0x18);
              lVar10 = lVar10 + 1;
              iVar2 = iVar2 + -1;
              lVar12 = lVar12 + 0x100000000;
            } while (lVar10 < (long)uVar8);
          }
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar7 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_09209710);
        System_ArgumentException___ctor(uVar7,uVar5,0);
      }
    }
    else {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09209d60);
      uVar6 = thunk_FUN_03fc39d4(&DAT_092179d0);
      System_ArgumentException___ctor(uVar7,uVar5,uVar6,0);
    }
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d9e08);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar5);
}


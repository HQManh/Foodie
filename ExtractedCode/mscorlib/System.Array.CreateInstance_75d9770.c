// rea decompile_all
// name: System.Array$$CreateInstance
// address: 0x75d9770
// body: available
// range: 0x75d9770-0x75d98e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d9814 to 0x75d98e4 System.Array$$CreateInstance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75d9818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d981c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d9878 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__CreateInstance(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  if ((DAT_09521e9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_09521e9b = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921e670);
    System_ArgumentNullException___ctor(uVar2,uVar3,0);
  }
  else {
    if (*(long *)(param_2 + 0x18) != 0) {
      lVar1 = FUN_03f5c394(DAT_091801b8);
      iVar5 = (int)*(undefined8 *)(param_2 + 0x18);
      if (0 < iVar5) {
        lVar6 = 0;
        do {
          lVar8 = *(long *)(param_2 + 0x20 + lVar6 * 8);
          iVar7 = (int)lVar8;
          if (lVar8 != iVar7) {
            thunk_FUN_03fc39d4(&DAT_09181558);
            uVar2 = thunk_FUN_03f9944c();
            uVar3 = thunk_FUN_03fc39d4(&DAT_0921e630);
            uVar4 = thunk_FUN_03fc39d4(&DAT_091fbfd0);
            System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar4,0);
            goto LAB_075d9864;
          }
          if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar1 + 0x18) <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = lVar6 + 1;
          *(int *)(lVar1 + 0x20 + lVar6 * 4) = iVar7;
          lVar6 = lVar8;
        } while (iVar5 != (int)lVar8);
      }
      System_Array__CreateInstance(param_1);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09208360);
    System_ArgumentException___ctor(uVar2,uVar3,0);
  }
LAB_075d9864:
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c07c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}


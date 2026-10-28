// rea decompile_all
// name: System.Reflection.SignatureConstructedGenericType$$.ctor
// address: 0x74e2c20
// body: available
// range: 0x74e2c20-0x74e2dc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e2d48 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e2d90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e2d94 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e2db8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e2dc4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_SignatureConstructedGenericType___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((DAT_095215a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180748);
    DAT_095215a9 = 1;
  }
  System_Reflection_SignatureType___ctor(param_1);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__op_Equality(param_2,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_3 != 0) {
      lVar2 = System_Array__Clone(param_3,0);
      uVar7 = DAT_09180748;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = thunk_FUN_03f99350(lVar2,DAT_09180748);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar2,uVar7);
      }
      if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
        uVar1 = 0;
        uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar7 = *(undefined8 *)(lVar3 + 0x20 + uVar1 * 8);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_Type__op_Equality(uVar7,0,0);
          if ((uVar6 & 1) != 0) goto LAB_074e2d4c;
          uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar3 + 0x18));
      }
      *(undefined8 *)(param_1 + 0x18) = param_2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_2);
      *(long *)(param_1 + 0x20) = lVar3;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),lVar3);
      return;
    }
LAB_074e2d4c:
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09224550;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    puVar4 = &DAT_0921bee0;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentNullException___ctor(uVar7,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d8fb0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar5);
}


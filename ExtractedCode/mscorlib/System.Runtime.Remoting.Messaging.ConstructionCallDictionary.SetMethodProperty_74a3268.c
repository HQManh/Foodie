// rea decompile_all
// name: System.Runtime.Remoting.Messaging.ConstructionCallDictionary$$SetMethodProperty
// address: 0x74a3268
// body: available
// range: 0x74a3268-0x74a34cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a336c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a33f8 to 0x74a34d0 System.Runtime.Remoting.Messaging.MessageDictionary$$SetMethodProperty (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74a34b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a34b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a34c0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a34cc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Messaging_ConstructionCallDictionary__SetMethodProperty
               (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  
  if ((DAT_0952138b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091852c8);
    FUN_03f5c2a4(&DAT_09185858);
    FUN_03f5c2a4(&DAT_09216a60);
    FUN_03f5c2a4(&DAT_09216a88);
    FUN_03f5c2a4(&DAT_09216a68);
    FUN_03f5c2a4(&DAT_09216a80);
    FUN_03f5c2a4(&DAT_09216a58);
    DAT_0952138b = 1;
  }
  uVar2 = System_String__op_Equality(param_2,DAT_09216a68,0);
  lVar5 = DAT_09185858;
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__op_Equality(param_2,DAT_09216a80,0);
    if (((((uVar2 & 1) == 0) &&
         (uVar2 = System_String__op_Equality(param_2,DAT_09216a58,0), (uVar2 & 1) == 0)) &&
        (uVar2 = System_String__op_Equality(param_2,DAT_09216a88,0), (uVar2 & 1) == 0)) &&
       (uVar2 = System_String__op_Equality(param_2,DAT_09216a60,0), (uVar2 & 1) == 0)) {
      System_Runtime_Remoting_Messaging_MessageDictionary__SetMethodProperty
                (param_1,param_2,param_3);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_0921dfc0);
    System_ArgumentException___ctor(uVar7,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091c5f10);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar8);
  }
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = thunk_FUN_03f99350(lVar10,DAT_09185858);
  lVar1 = DAT_09185858;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar10,lVar5);
  }
  plVar4 = (long *)thunk_FUN_03f99350(lVar10,DAT_09185858);
  uVar7 = DAT_091852c8;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar10,lVar1);
  }
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = thunk_FUN_03f99350(param_3,DAT_091852c8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3,uVar7);
    }
  }
  lVar10 = *plVar4;
  uVar2 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar1) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_074a3450;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar6 = (undefined8 *)FUN_03f95da8(plVar4,lVar1,3);
LAB_074a3450:
                    /* WARNING: Could not recover jumptable at 0x074a3468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar4,lVar5,puVar6[1]);
  return;
}


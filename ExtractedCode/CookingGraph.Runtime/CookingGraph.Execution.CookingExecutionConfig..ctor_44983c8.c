// rea decompile_all
// name: CookingGraph.Execution.CookingExecutionConfig$$.ctor
// address: 0x44983c8
// body: available
// range: 0x44983c8-0x449868b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449863c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4498640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4498688 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecutionConfig___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,long param_7,byte param_8,byte param_9,byte param_10,
               byte param_11,byte param_12,byte param_13,byte param_14,byte param_15,char param_16,
               undefined8 param_17,byte param_18,undefined4 param_19,byte param_20,byte param_21,
               byte param_22)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((DAT_095181e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fe78);
    FUN_03f5c2a4(&DAT_091b6d58);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_0921b2f0);
    FUN_03f5c2a4(&DAT_0921f330);
    FUN_03f5c2a4(&DAT_0921b898);
    DAT_095181e9 = 1;
  }
  System_Object___ctor(param_7,0);
  lVar1 = FUN_03f5c394(DAT_0917fe78,5);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = (uint)*(ulong *)(lVar1 + 0x18);
  if (((uVar4 != 0) && (*(undefined8 *)(lVar1 + 0x20) = param_1, uVar4 != 1)) &&
     (*(undefined8 *)(lVar1 + 0x28) = param_2, 2 < uVar4)) {
    uVar2 = param_1;
    if (param_16 != '\0') {
      uVar2 = param_17;
    }
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    if ((uVar4 != 3) && (*(undefined8 *)(lVar1 + 0x38) = param_3, 4 < uVar4)) {
      *(undefined8 *)(lVar1 + 0x40) = param_4;
      if (0 < (int)uVar4) {
        uVar6 = 0;
        uVar5 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar6) goto LAB_0449863c;
          CookingGraph_Execution_CookingExecution__RequireTime
                    (*(undefined8 *)(lVar1 + 0x20 + uVar6 * 8),DAT_0921b2f0);
          uVar5 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
      CookingGraph_Execution_CookingExecution__RequireTime(param_5,DAT_0921b898);
      CookingGraph_Execution_CookingExecution__RequireTime(param_6,DAT_0921f330);
      if ((param_5 != 0.0) && (param_6 != 0.0)) {
        *(byte *)(param_7 + 0x13) = param_8 & 1;
        *(byte *)(param_7 + 0x11) = param_10 & 1;
        *(byte *)(param_7 + 0x10) = param_9 & 1;
        *(byte *)(param_7 + 0x12) = param_14 & 1;
        *(byte *)(param_7 + 0x28) = param_11 & 1;
        *(byte *)(param_7 + 0x2a) = param_13 & 1;
        *(byte *)(param_7 + 0x29) = param_12 & 1;
        *(byte *)(param_7 + 0x2b) = param_15 & 1;
        *(byte *)(param_7 + 0x58) = param_18 & 1;
        *(undefined4 *)(param_7 + 0x5c) = param_19;
        *(undefined8 *)(param_7 + 0x18) = param_1;
        *(undefined8 *)(param_7 + 0x20) = param_2;
        *(undefined8 *)(param_7 + 0x30) = uVar2;
        *(undefined8 *)(param_7 + 0x38) = param_3;
        *(undefined8 *)(param_7 + 0x40) = param_4;
        *(double *)(param_7 + 0x48) = param_5;
        *(double *)(param_7 + 0x50) = param_6;
        *(byte *)(param_7 + 0x60) = param_20 & 1;
        *(byte *)(param_7 + 0x61) = param_21 & 1;
        *(byte *)(param_7 + 0x62) = param_22 & 1;
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_092109a0);
      System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091c64d8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
  }
LAB_0449863c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


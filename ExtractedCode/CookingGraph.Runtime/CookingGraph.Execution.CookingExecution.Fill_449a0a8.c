// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Fill
// address: 0x449a0a8
// body: available
// range: 0x449a0a8-0x449a293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449a28c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449a290 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__Fill(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_38;
  
  if ((DAT_095181ce & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9258);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_091e6c38);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181ce = 1;
  }
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_50 = param_2[2];
  local_38 = 0;
  uVar1 = CookingGraph_Execution_CookingExecution__TryDish(param_1,&local_60,&local_38);
  if ((uVar1 & 1) != 0) {
    if ((local_38 == 0) || (lVar3 = *(long *)(local_38 + 0x18), lVar3 == 0)) {
LAB_0449a28c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)((long)param_2 + 0x14)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    pcVar4 = (char *)(lVar3 + (int)*(uint *)((long)param_2 + 0x14) + 0x20);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      uStack_78 = param_2[1];
      local_80 = *param_2;
      local_70 = param_2[2];
      CookingGraph_Execution_CookingExecution__Emit(param_1,4,&local_80,0);
      if (local_38 == 0) goto LAB_0449a28c;
      uVar6 = *(undefined8 *)(local_38 + 0x18);
      if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
      lVar3 = puVar5[0xd];
      if (lVar3 == 0) {
        if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar5 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
        }
        uVar7 = *puVar5;
        lVar3 = thunk_FUN_03f9944c(DAT_09178468);
        FUN_05311eac(lVar3,uVar7,DAT_091e6c38,0);
        plVar2 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x68);
        *plVar2 = lVar3;
        thunk_FUN_03f5d7b8(plVar2,lVar3);
      }
      uVar1 = FUN_04ab20f8(uVar6,lVar3,DAT_091c9258);
      if ((uVar1 & 1) != 0) {
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        CookingGraph_Execution_CookingEndpoint___ctor
                  (&local_98,*(undefined4 *)param_2,param_2[1],*(undefined4 *)(param_2 + 2),0);
        uStack_a8 = uStack_90;
        local_b0 = local_98;
        local_a0 = local_88;
        CookingGraph_Execution_CookingExecution__Emit(param_1,5,&local_b0,0);
      }
    }
  }
  return;
}


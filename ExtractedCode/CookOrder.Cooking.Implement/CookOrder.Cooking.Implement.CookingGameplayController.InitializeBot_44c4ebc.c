// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$InitializeBot
// address: 0x44c4ebc
// body: available
// range: 0x44c4ebc-0x44c518b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c5184 to 0x44c51bc CookOrder.Cooking.Implement.CookingGameplayController$$ReportBotSettings (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c5188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__InitializeBot(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09518272 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09182d48);
    FUN_03f5c2a4(&DAT_09184168);
    FUN_03f5c2a4(&DAT_0918f020);
    DAT_09518272 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09184168);
  CookingGraph_EstimatorBotSettings___ctor(lVar2,0);
  lVar5 = DAT_09182cc0;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_1 + 0x164);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09516607 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09516607 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    cVar1 = DAT_09516608;
    lVar5 = DAT_09182cc0;
    *(undefined4 *)(lVar2 + 0x68) = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x38);
    if (cVar1 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09516608 = '\x01';
      lVar5 = DAT_09182cc0;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = DAT_09182cc0;
    }
    cVar1 = DAT_09516609;
    *(undefined4 *)(lVar2 + 0x70) = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x70);
    if (cVar1 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09516609 = '\x01';
      lVar5 = DAT_09182cc0;
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = DAT_09182cc0;
    }
    lVar4 = *(long *)(param_1 + 0x120);
    *(undefined4 *)(lVar2 + 0x6c) = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x50);
    if (((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x10), lVar5 != 0)) &&
       (lVar5 = *(long *)(lVar5 + 0x28), lVar5 != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x118);
      *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(lVar5 + 0x2c);
      uVar3 = DAT_09182d48;
      *(undefined1 *)(lVar2 + 0x7c) = 1;
      uVar3 = thunk_FUN_03f9944c(uVar3);
      CookingGraph_CookingEstimatorBot___ctor(uVar3,uVar6,uVar6,lVar2,0,0);
      *(undefined8 *)(param_1 + 0x130) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 0x130,uVar3);
      if (((*(long *)(param_1 + 0x120) != 0) && (*(long *)(param_1 + 0x118) != 0)) &&
         (*(long *)(param_1 + 0x130) != 0)) {
        CookingGraph_CookingEstimatorBot__Init
                  (*(long *)(param_1 + 0x130),*(undefined8 *)(*(long *)(param_1 + 0x120) + 0x10),
                   param_2,*(undefined8 *)(*(long *)(param_1 + 0x118) + 0x180),0,0);
        if ((param_2 == 0) || (*(int *)(param_2 + 0x14) == 0)) {
          if (*(long *)(param_1 + 0x130) == 0) goto LAB_044c5188;
          CookingGraph_CookingEstimatorBot__SetPickingStrategy
                    (*(long *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x160),0);
        }
        if (*(long *)(param_1 + 0x170) == 0) {
          lVar5 = thunk_FUN_03f9944c(DAT_0918f020);
          System_Object___ctor(lVar5,0);
          *(long *)(lVar5 + 0x10) = param_1;
          thunk_FUN_03f5d7b8((long *)(lVar5 + 0x10),param_1);
          *(long *)(param_1 + 0x170) = lVar5;
          thunk_FUN_03f5d7b8(param_1 + 0x170,lVar5);
        }
        lVar5 = *(long *)(param_1 + 0x130);
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_0951660b == '\0') {
          FUN_03f5c2a4(&DAT_09182cc0);
          DAT_0951660b = '\x01';
        }
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar5 != 0) {
          CookingGraph_CookingEstimatorBot__SetVerboseLogging
                    (lVar5,*(undefined1 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x80),
                     *(undefined8 *)(param_1 + 0x170),0);
          CookOrder_Cooking_Implement_CookingGameplayController__ReportBotSettings(param_1);
          return;
        }
      }
    }
  }
LAB_044c5188:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


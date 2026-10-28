// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$PreviewFailurePriority
// address: 0x441c31c
// body: available
// range: 0x441c31c-0x441c4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441c4b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CookingGraph_EstimatorBotScorer__PreviewFailurePriority(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  if ((DAT_09517f08 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c68);
    FUN_03f5c2a4(&DAT_09178640);
    FUN_03f5c2a4(&DAT_091abed8);
    FUN_03f5c2a4(&DAT_0917bf10);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e9bf0);
    FUN_03f5c2a4(&DAT_091906b0);
    DAT_09517f08 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_091906b0);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(lVar3 + 0x10) = param_2;
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)) {
      lVar5 = thunk_FUN_03f9944c(DAT_0917bf10);
      FUN_057e0400(lVar5,DAT_091abed8);
    }
    uVar4 = thunk_FUN_03f9944c(DAT_09178640);
    FUN_05322d94(uVar4,lVar3,DAT_091e9bf0,0);
    lVar3 = FUN_04ae5fd0(lVar5,uVar4,DAT_091c9c68);
    if (lVar3 == 0) {
      fVar6 = 1.0;
    }
    else {
      uVar1 = *(undefined4 *)(lVar3 + 0x14);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187e80);
      }
      iVar2 = System_Math__Max(0,uVar1,0);
      fVar6 = (float)System_Math__Min(0x3ecccccd,(float)iVar2 * 0.08,0);
      fVar6 = fVar6 + 1.0;
    }
    return fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


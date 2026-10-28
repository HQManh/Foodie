// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$ActiveFailurePriority
// address: 0x441acf0
// body: available
// range: 0x441acf0-0x441af73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441af70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CookingGraph_EstimatorBotScorer__ActiveFailurePriority
                (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09517f07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c68);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_09178640);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091abed8);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917bf10);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e9be8);
    FUN_03f5c2a4(&DAT_091906a8);
    DAT_09517f07 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_091906a8);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(lVar3 + 0x10) = param_2;
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) {
      lVar6 = thunk_FUN_03f9944c(DAT_0917bf10);
      FUN_057e0400(lVar6,DAT_091abed8);
    }
    uVar4 = thunk_FUN_03f9944c(DAT_09178640);
    FUN_05322d94(uVar4,lVar3,DAT_091e9be8,0);
    lVar3 = FUN_04ae5fd0(lVar6,uVar4,DAT_091c9c68);
    fVar8 = 1.0;
    fVar7 = 1.0;
    if (lVar3 != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(param_3,0,0);
      fVar7 = fVar8;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(DAT_09184160 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = CookingGraph_EstimatorBotScorer__IngredientKnowledgeName(param_3);
        uVar5 = System_String__IsNullOrEmpty(uVar4,0);
        if ((uVar5 & 1) == 0) {
          lVar6 = *(long *)(lVar3 + 0x18);
          if (lVar6 == 0) {
            lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
            FUN_057e0400(lVar6,DAT_091b0558);
            if (lVar6 == 0) goto LAB_0441af70;
          }
          uVar5 = FUN_057e1004(lVar6,uVar4,DAT_091b0590);
          if ((uVar5 & 1) != 0) {
            uVar1 = *(undefined4 *)(lVar3 + 0x14);
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = System_Math__Max(0,uVar1,0);
            fVar7 = (float)System_Math__Min(0x3f800000,(float)iVar2 * 0.2,0);
            fVar7 = fVar7 + 1.0;
          }
        }
      }
    }
    return fVar7;
  }
LAB_0441af70:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


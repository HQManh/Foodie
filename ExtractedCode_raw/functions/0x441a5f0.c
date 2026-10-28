// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$AddRequirements
// address: 0x441a5f0
// body: available
// range: 0x441a5f0-0x441a7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x441a7ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_EstimatorBotScorer__AddRequirements
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if ((DAT_09517f1e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d090);
    FUN_03f5c2a4(&DAT_091a5e28);
    FUN_03f5c2a4(&DAT_091a5e30);
    FUN_03f5c2a4(&DAT_091a5e38);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_091a8258);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_091a9418);
    FUN_03f5c2a4(&DAT_091a9420);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f1e = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_4,0,0);
  if ((0.0 < param_1) && ((uVar2 & 1) == 0)) {
    uVar3 = thunk_FUN_03f9944c(DAT_09179e10);
    FUN_053eb530(uVar3,DAT_091a8258);
    lVar4 = CookingGraph_EstimatorBotScorer__RawRequirements(param_2,param_4,uVar3);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fe2efc(&local_70,lVar4,DAT_0919d090);
    while (uVar2 = FUN_07276bd0(&local_70,DAT_091a5e30), uVar3 = local_60, (uVar2 & 1) != 0) {
      fVar1 = (float)local_58;
      if (*(int *)(DAT_09184160 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      CookingGraph_EstimatorBotScorer__Add(fVar1 * param_1,param_3,uVar3);
    }
    FUN_07276cfc(&local_70,DAT_091a5e28);
  }
  return;
}


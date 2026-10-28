// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator$$WeightedPick
// address: 0x443247c
// body: available
// range: 0x443247c-0x4432733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4432730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CustomerOrderGenerator__WeightedPick
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  if ((DAT_09517fa0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cab68);
    FUN_03f5c2a4(&DAT_091cb1e8);
    FUN_03f5c2a4(&DAT_091cb4d8);
    FUN_03f5c2a4(&DAT_091a3380);
    FUN_03f5c2a4(&DAT_091a3388);
    FUN_03f5c2a4(&DAT_091a3390);
    FUN_03f5c2a4(&DAT_09178ae8);
    FUN_03f5c2a4(&DAT_09178af8);
    FUN_03f5c2a4(&DAT_091ada18);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_091e83a8);
    FUN_03f5c2a4(&DAT_091e83b0);
    FUN_03f5c2a4(&DAT_0918f958);
    DAT_09517fa0 = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f958);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
LAB_04432730:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar5 = (undefined8 *)(lVar1 + 0x10);
  *puVar5 = param_2;
  thunk_FUN_03f5d7b8(puVar5,param_2);
  uVar2 = thunk_FUN_03f9944c(DAT_09178ae8);
  FUN_05322d94(uVar2,lVar1,DAT_091e83a8,0);
  uVar2 = FUN_04b0cafc(param_1,uVar2,DAT_091cb4d8);
  lVar3 = FUN_04b08b78(uVar2,DAT_091cb1e8);
  uVar2 = thunk_FUN_03f9944c(DAT_09178af8);
  FUN_05324834(uVar2,lVar1,DAT_091e83b0,0);
  fVar6 = (float)FUN_04b02694(lVar3,uVar2,DAT_091cab68);
  uVar2 = 0;
  if (0.0 < fVar6) {
    dVar7 = (double)CookingGraph_CustomerOrderGenerator__NextUnit(param_3);
    if (lVar3 == 0) goto LAB_04432730;
    dVar7 = dVar7 * (double)fVar6;
    FUN_057e185c(&local_88,lVar3,DAT_091ada18);
    do {
      uVar4 = FUN_071bd28c(&local_88,DAT_091a3388);
      uVar2 = local_78;
      if ((uVar4 & 1) == 0) {
        FUN_071bd288(&local_88,DAT_091a3380);
        uVar2 = FUN_057e0998(lVar3,*(int *)(lVar3 + 0x18) + -1,DAT_091ada40);
        return uVar2;
      }
      fVar6 = (float)CookingGraph_CustomerOrderGenerator__WeightOf(*puVar5,local_78);
      dVar7 = dVar7 - (double)fVar6;
    } while (0.0 < dVar7);
    FUN_071bd288(&local_88,DAT_091a3380);
  }
  return uVar2;
}


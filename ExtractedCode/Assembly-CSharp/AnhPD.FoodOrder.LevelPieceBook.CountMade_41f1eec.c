// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$CountMade
// address: 0x41f1eec
// body: available
// range: 0x41f1eec-0x41f2003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_LevelPieceBook__CountMade(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09516b7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b7b = 1;
  }
  uVar7 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
  if (((uVar5 & 1) == 0) || (uVar5 = System_String__IsNullOrEmpty(param_2,0), (uVar5 & 1) != 0)) {
    iVar4 = 0;
  }
  else {
    uVar6 = AnhPD_FoodOrder_LevelPieceBook__CountLoose(uVar7,param_2);
    iVar1 = AnhPD_FoodOrder_LevelPieceBook__CountInBag(uVar6,param_2);
    iVar2 = AnhPD_FoodOrder_LevelPieceBook__CountOwedByStations(uVar7,param_2);
    if (*(long *)(param_1 + 0x10) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = AnhPD_FoodOrder_LevelInfo__CountInboundFor(*(long *)(param_1 + 0x10),param_2);
    }
    iVar4 = AnhPD_FoodOrder_LevelPieceBook__CountHeldByStations(uVar7,param_2,0);
    iVar4 = iVar1 + (int)uVar6 + iVar2 + iVar3 + iVar4;
  }
  return iVar4;
}


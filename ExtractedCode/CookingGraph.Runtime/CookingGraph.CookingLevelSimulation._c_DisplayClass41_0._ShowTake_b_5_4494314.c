// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass41_0$$<ShowTake>b__5
// address: 0x4494314
// body: available
// range: 0x4494314-0x44943bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation_<>c__DisplayClass41_0__<ShowTake>b__5(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0951817e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cb0);
    DAT_0951817e = 1;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x88);
  local_60 = *(undefined8 *)(param_1 + 0x80);
  local_50 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = thunk_FUN_03f9944c(DAT_09182cb0);
  CookingGraph_CookingAutoCompleteTake___ctor
            (uVar5,uVar1,uVar2,4,uVar4,&local_60,uVar3,param_2 & 1,0);
  return uVar5;
}


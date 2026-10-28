// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PreferDirectServing
// address: 0x445ab2c
// body: available
// range: 0x445ab2c-0x445ad8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation__PreferDirectServing
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((DAT_0951807c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6868);
    FUN_03f5c2a4(&DAT_0917fe78);
    FUN_03f5c2a4(&DAT_091c98b8);
    FUN_03f5c2a4(&DAT_091c9a28);
    FUN_03f5c2a4(&DAT_091ca0d8);
    FUN_03f5c2a4(&DAT_091ca808);
    FUN_03f5c2a4(&DAT_09179358);
    FUN_03f5c2a4(&DAT_09178398);
    FUN_03f5c2a4(&DAT_0918f690);
    FUN_03f5c2a4(&DAT_091e77f0);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951807c = 1;
  }
  if ((param_5 & 1) == 0) {
    lVar3 = CookingGraph_CookingLevelSimulation__DirectFulfillmentPriority(param_1,param_2,param_4);
  }
  else {
    lVar3 = FUN_03f5c394(DAT_0917fe78,3);
  }
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar4 = thunk_FUN_03f9944c(DAT_09179358);
    FUN_05324070(uVar4,param_1,DAT_091c6868,0);
    uVar4 = FUN_04af8044(param_3,uVar4,DAT_091ca808);
    uVar5 = CookingGraph_CookingLevelSimulation__get_NoFulfillment(param_1);
    uVar4 = FUN_04adcd44(uVar4,uVar5,DAT_091c98b8);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar8 = puVar7[0xb0];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar5 = *puVar7;
      lVar8 = thunk_FUN_03f9944c(DAT_09178398);
      FUN_05324070(lVar8,uVar5,DAT_091e77f0,0);
      lVar6 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar6 + 0x580) = lVar8;
      thunk_FUN_03f5d7b8(lVar6 + 0x580,lVar8);
    }
    if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = FUN_04aeafe8(uVar4,lVar8,**(undefined8 **)(DAT_0918f690 + 0xb8),DAT_091ca0d8);
    uVar4 = FUN_04ae1388(uVar4,DAT_091c9a28);
    iVar2 = CookingGraph_CookingLevelSimulation__CompareRank(lVar3,uVar4);
    bVar1 = iVar2 < 1;
  }
  return bVar1;
}


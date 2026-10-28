// rea decompile_all
// name: CookingGraph.GridLayoutTranslator$$Serialize
// address: 0x442b2ec
// body: available
// range: 0x442b2ec-0x442b547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442b4fc to 0x7431268 System.String$$Join (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x442b544 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_GridLayoutTranslator__Serialize(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_09517f69 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9290);
    FUN_03f5c2a4(&DAT_091ca4b8);
    FUN_03f5c2a4(&DAT_091789a0);
    FUN_03f5c2a4(&DAT_09178998);
    FUN_03f5c2a4(&DAT_091eaf30);
    FUN_03f5c2a4(&DAT_091eaf38);
    FUN_03f5c2a4(&DAT_091910f8);
    FUN_03f5c2a4(&DAT_091f86d8);
    DAT_09517f69 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921a200);
    System_ArgumentNullException___ctor(uVar4,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091ce340);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar6);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_091910f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_091910f8 + 0xb8);
  lVar5 = puVar3[2];
  if (lVar5 == 0) {
    if (*(int *)(DAT_091910f8 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_091910f8 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar5 = thunk_FUN_03f9944c(DAT_09178998);
    FUN_05322d94(lVar5,uVar6,DAT_091eaf30,0);
    plVar1 = (long *)(*(long *)(DAT_091910f8 + 0xb8) + 0x10);
    *plVar1 = lVar5;
    thunk_FUN_03f5d7b8(plVar1,lVar5);
  }
  uVar2 = FUN_04ab300c(uVar4,lVar5,DAT_091c9290);
  if ((uVar2 & 1) != 0) {
    return **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_091910f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = DAT_091f86d8;
  puVar3 = *(undefined8 **)(DAT_091910f8 + 0xb8);
  lVar5 = puVar3[3];
  if (lVar5 == 0) {
    if (*(int *)(DAT_091910f8 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_091910f8 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar5 = thunk_FUN_03f9944c(DAT_091789a0);
    FUN_05324070(lVar5,uVar7,DAT_091eaf38,0);
    plVar1 = (long *)(*(long *)(DAT_091910f8 + 0xb8) + 0x18);
    *plVar1 = lVar5;
    thunk_FUN_03f5d7b8(plVar1,lVar5);
  }
  uVar4 = FUN_04af8044(uVar4,lVar5,DAT_091ca4b8);
  uVar4 = System_String__Join(uVar6,uVar4,0);
  return uVar4;
}


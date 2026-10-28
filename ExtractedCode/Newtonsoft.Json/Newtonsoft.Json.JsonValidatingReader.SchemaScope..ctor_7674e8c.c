// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader.SchemaScope$$.ctor
// address: 0x7674e8c
// body: available
// range: 0x7674e8c-0x7675223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7675208 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonValidatingReader_SchemaScope___ctor
               (long param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_095224af & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c94a8);
    FUN_03f5c2a4(&DAT_091c9938);
    FUN_03f5c2a4(&DAT_091ca9a0);
    FUN_03f5c2a4(&DAT_091cb060);
    FUN_03f5c2a4(&DAT_09178c90);
    FUN_03f5c2a4(&DAT_091790b8);
    FUN_03f5c2a4(&DAT_09179080);
    FUN_03f5c2a4(&DAT_09178c98);
    FUN_03f5c2a4(&DAT_091adfa8);
    FUN_03f5c2a4(&DAT_0917c598);
    FUN_03f5c2a4(&DAT_091ec138);
    FUN_03f5c2a4(&DAT_091f3210);
    FUN_03f5c2a4(&DAT_091f3218);
    FUN_03f5c2a4(&DAT_091f3220);
    FUN_03f5c2a4(&DAT_091968a0);
    DAT_095224af = 1;
  }
  System_Object___ctor(param_1,0);
  *(int *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_3);
  uVar1 = thunk_FUN_03f9944c(DAT_09178c90);
  FUN_05324070(uVar1,param_1,DAT_091ec138,0);
  uVar1 = FUN_04afac50(param_3,uVar1,DAT_091ca9a0);
  uVar1 = FUN_04add4b8(uVar1,DAT_091c9938);
  if (*(int *)(DAT_091968a0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091968a0);
  }
  puVar4 = *(undefined8 **)(DAT_091968a0 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(DAT_091968a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091968a0);
      puVar4 = *(undefined8 **)(DAT_091968a0 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_03f9944c(DAT_091790b8);
    FUN_05324070(lVar5,uVar6,DAT_091f3210,0);
    plVar2 = (long *)(*(long *)(DAT_091968a0 + 0xb8) + 8);
    *plVar2 = lVar5;
    thunk_FUN_03f5d7b8(plVar2,lVar5);
  }
  if (*(int *)(DAT_091968a0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091968a0);
  }
  puVar4 = *(undefined8 **)(DAT_091968a0 + 0xb8);
  lVar7 = puVar4[2];
  if (lVar7 == 0) {
    if (*(int *)(DAT_091968a0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091968a0);
      puVar4 = *(undefined8 **)(DAT_091968a0 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar7 = thunk_FUN_03f9944c(DAT_09179080);
    FUN_05322d94(lVar7,uVar6,DAT_091f3218,0);
    plVar2 = (long *)(*(long *)(DAT_091968a0 + 0xb8) + 0x10);
    *plVar2 = lVar7;
    thunk_FUN_03f5d7b8(plVar2,lVar7);
  }
  uVar1 = FUN_04b05178(uVar1,lVar5,lVar7,DAT_091cb060);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8();
  if (param_2 == 2) {
    if (*(int *)(DAT_091968a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_091968a0 + 0xb8);
    lVar5 = puVar4[3];
    if (lVar5 == 0) {
      if (*(int *)(DAT_091968a0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_091968a0 + 0xb8);
      }
      uVar1 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09178c98);
      FUN_05322d94(lVar5,uVar1,DAT_091f3220,0);
      plVar2 = (long *)(*(long *)(DAT_091968a0 + 0xb8) + 0x18);
      *plVar2 = lVar5;
      thunk_FUN_03f5d7b8(plVar2,lVar5);
    }
    uVar3 = FUN_04ab6f28(param_3,lVar5,DAT_091c94a8);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x34) = 1;
      uVar1 = thunk_FUN_03f9944c(DAT_0917c598);
      FUN_057e0400(uVar1,DAT_091adfa8);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar1);
      return;
    }
  }
  return;
}


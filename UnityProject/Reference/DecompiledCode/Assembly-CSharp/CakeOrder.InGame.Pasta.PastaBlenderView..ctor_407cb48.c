// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaBlenderView$$.ctor
// address: 0x407cb48
// body: available
// range: 0x407cb48-0x407cd7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407cd78 to 0x41110ec AnhPD.FoodOrder.StationGroupView$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaBlenderView___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09515c47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b35d8);
    FUN_03f5c2a4(&DAT_091b35c8);
    FUN_03f5c2a4(&DAT_0917d630);
    FUN_03f5c2a4(&DAT_0917d628);
    FUN_03f5c2a4(&DAT_09204b28);
    FUN_03f5c2a4(&DAT_0921d4d8);
    FUN_03f5c2a4(&DAT_0921f668);
    FUN_03f5c2a4(&DAT_0921a3f8);
    FUN_03f5c2a4(&DAT_092180f0);
    FUN_03f5c2a4(&DAT_0921f670);
    FUN_03f5c2a4(&DAT_09204b20);
    FUN_03f5c2a4(&DAT_0921f660);
    DAT_09515c47 = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = DAT_0921f668;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x30) = DAT_0921f660;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x38) = DAT_09204b20;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x40) = DAT_0921d4d8;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x48) = DAT_09204b28;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x50) = DAT_0921f670;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x58) = DAT_092180f0;
  thunk_FUN_03f5d7b8();
  uVar1 = DAT_0921a3f8;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  thunk_FUN_03f5d7b8();
  uVar1 = thunk_FUN_03f9944c(DAT_0917d630);
  FUN_057e0400(uVar1,DAT_091b35d8);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d628);
  FUN_057e0400(uVar1,DAT_091b35c8);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar1);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_1 + 0x98) = 0x3df5c28f;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  AnhPD_FoodOrder_StationGroupView___ctor(param_1,0);
  return;
}


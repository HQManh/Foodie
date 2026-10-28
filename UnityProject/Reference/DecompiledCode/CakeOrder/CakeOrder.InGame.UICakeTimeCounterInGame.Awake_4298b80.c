// rea decompile_all
// name: CakeOrder.InGame.UICakeTimeCounterInGame$$Awake
// address: 0x4298b80
// body: available
// range: 0x4298b80-0x4298c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4298c80 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakeTimeCounterInGame__Awake(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  
  if ((DAT_095171e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbc88);
    FUN_03f5c2a4(&DAT_091dbe28);
    FUN_03f5c2a4(&DAT_091dc048);
    DAT_095171e2 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  fVar3 = *(float *)(param_1 + 0x70);
  lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
  uVar2 = DG_Tweening_ShortcutExtensions__DOPunchScale
                    (*(float *)(lVar1 + 0xc) * fVar3,*(float *)(lVar1 + 0x10) * fVar3,
                     *(float *)(lVar1 + 0x14) * fVar3,*(undefined4 *)(param_1 + 0x6c),0x3f800000,
                     uVar2,10,0);
  uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc048);
  uVar2 = FUN_04d95c58(uVar2,0,DAT_091dbe28);
  uVar2 = FUN_04d8dc1c(uVar2,DAT_091dbc88);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar2);
  return;
}


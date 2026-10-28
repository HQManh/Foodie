// rea decompile_all
// name: DG.Tweening.DOTween$$.cctor
// address: 0x453a920
// body: available
// range: 0x453a920-0x453aa53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453aa50 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_DOTween___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_095186d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b1170);
    FUN_03f5c2a4(&DAT_0917ced0);
    FUN_03f5c2a4(&DAT_091f97c0);
    DAT_095186d5 = 1;
  }
  **(undefined8 **)(DAT_09183190 + 0xb8) = DAT_091f97c0;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183190 + 0xb8));
  uVar1 = DAT_0917ced0;
  uVar4 = NEON_fmov(0x3f800000,4);
  lVar3 = *(long *)(DAT_09183190 + 0xb8);
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(undefined1 *)(lVar3 + 8) = 1;
  *(undefined2 *)(lVar3 + 0x38) = 1;
  *(undefined1 *)(lVar3 + 0x3a) = 1;
  *(undefined1 *)(lVar3 + 0x48) = 1;
  *(undefined4 *)(lVar3 + 0x24) = 0x3e19999a;
  *(undefined8 *)(lVar3 + 0x28) = 0x200000000;
  *(undefined4 *)(lVar3 + 0x44) = 3;
  *(undefined8 *)(lVar3 + 0xc) = 2;
  *(undefined1 *)(lVar3 + 0x14) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined1 *)(lVar3 + 0x40) = 0;
  *(undefined4 *)(lVar3 + 0x4c) = 0;
  *(undefined4 *)(lVar3 + 0x54) = 6;
  *(undefined8 *)(lVar3 + 0x58) = 0x3fd9cd60;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091b1170);
  puVar2 = (undefined8 *)(*(long *)(DAT_09183190 + 0xb8) + 0x88);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  return;
}


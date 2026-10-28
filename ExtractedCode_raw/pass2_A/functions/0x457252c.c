// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$.cctor
// address: 0x457252c
// body: available
// range: 0x457252c-0x457274f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_TweenManager___cctor(void)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_095188bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091a0958);
    FUN_03f5c2a4(&DAT_09176e58);
    FUN_03f5c2a4(&DAT_091b1120);
    FUN_03f5c2a4(&DAT_0917cec8);
    FUN_03f5c2a4(&DAT_091bb440);
    FUN_03f5c2a4(&DAT_0917e960);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_09180740);
    DAT_095188bd = 1;
  }
  uVar3 = DAT_09180740;
  lVar4 = *(long *)(DAT_0918c158 + 0xb8);
  *(undefined8 *)(lVar4 + 4) = 0xc8000000fa;
  *(undefined4 *)(lVar4 + 0xc) = 0x32;
  uVar3 = FUN_03f5c394(uVar3,0xfa);
  puVar5 = (undefined8 *)(*(long *)(DAT_0918c158 + 0xb8) + 0x48);
  *puVar5 = uVar3;
  thunk_FUN_03f5d7b8(puVar5,uVar3);
  uVar3 = FUN_03f5c394(DAT_09180740,200);
  puVar5 = (undefined8 *)(*(long *)(DAT_0918c158 + 0xb8) + 0x50);
  *puVar5 = uVar3;
  thunk_FUN_03f5d7b8(puVar5,uVar3);
  uVar3 = thunk_FUN_03f9944c(DAT_0917e960);
  FUN_061a1268(uVar3,DAT_091bb440);
  puVar5 = (undefined8 *)(*(long *)(DAT_0918c158 + 0xb8) + 0x58);
  *puVar5 = uVar3;
  thunk_FUN_03f5d7b8(puVar5,uVar3);
  uVar3 = thunk_FUN_03f9944c(DAT_0917cec8);
  FUN_057e0478(uVar3,0xfa,DAT_091b1120);
  puVar5 = (undefined8 *)(*(long *)(DAT_0918c158 + 0xb8) + 0x60);
  *puVar5 = uVar3;
  thunk_FUN_03f5d7b8(puVar5,uVar3);
  uVar3 = thunk_FUN_03f9944c(DAT_09176e58);
  FUN_06fd76d4(uVar3,0xfa,DAT_091a0958);
  puVar5 = (undefined8 *)(*(long *)(DAT_0918c158 + 0xb8) + 0x68);
  *puVar5 = uVar3;
  thunk_FUN_03f5d7b8(puVar5,uVar3);
  lVar4 = DAT_091814b0;
  lVar6 = *(long *)(DAT_0918c158 + 0xb8);
  *(undefined8 *)(lVar6 + 0x7c) = 0xffffffffffffffff;
  iVar1 = *(int *)(lVar4 + 0xe4);
  *(undefined4 *)(lVar6 + 0x74) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0x84) = 0xffffffff;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  bVar2 = UnityEngine_Application__get_isEditor(0);
  **(byte **)(DAT_0918c158 + 0xb8) = bVar2 & 1;
  return;
}


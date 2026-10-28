// rea decompile_all
// name: ChocDino.UIFX.VideoPlayerSource$$.cctor
// address: 0x43e3aa4
// body: available
// range: 0x43e3aa4-0x43e3bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VideoPlayerSource___cctor(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((DAT_09517d4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918cd20);
    DAT_09517d4d = 1;
  }
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  **(undefined8 **)(DAT_0918cd20 + 0xb8) = **(undefined8 **)(DAT_0918cb68 + 0xb8);
  cVar1 = DAT_09515cf0;
  lVar2 = DAT_0918cd20;
  *(undefined8 *)(*(long *)(DAT_0918cd20 + 0xb8) + 8) = 0x3f8000003f000000;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf0 = '\x01';
    lVar2 = DAT_0918cd20;
  }
  lVar3 = DAT_0918cbd0;
  uVar5 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x3c);
  fVar6 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x44);
  lVar4 = *(long *)(lVar2 + 0xb8);
  *(undefined4 *)(lVar4 + 0x1c) = 0;
  *(ulong *)(lVar4 + 0x10) = CONCAT44((float)((ulong)uVar5 >> 0x20) * 0.5,(float)uVar5 * 0.5);
  *(float *)(lVar4 + 0x18) = fVar6 * 0.5;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x20) = 0x3f00000000000000;
  cVar1 = DAT_0951615d;
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x28) = 0x3f0000003f800000;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_0951615d = '\x01';
    lVar2 = DAT_0918cd20;
    lVar3 = DAT_0918cbd0;
  }
  lVar2 = *(long *)(lVar2 + 0xb8);
  uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x24);
  fVar6 = *(float *)(*(long *)(lVar3 + 0xb8) + 0x2c);
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(ulong *)(lVar2 + 0x30) = CONCAT44((float)((ulong)uVar5 >> 0x20) * 0.5,(float)uVar5 * 0.5);
  *(float *)(lVar2 + 0x38) = fVar6 * 0.5;
  return;
}


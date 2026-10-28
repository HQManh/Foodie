// rea decompile_all
// name: thunk_FUN_03f62828
// address: 0x753c6f8
// body: available
// range: 0x753c6f8-0x753c6fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * thunk_FUN_03f62828(int param_1,int *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar6 = (long)param_1 * 0x30;
  uVar1 = *(ushort *)(&DAT_0236c440 + lVar6);
  uVar2 = *(ushort *)(&DAT_0236c442 + lVar6);
  *param_2 = (int)(char)(&DAT_0236c45d)[lVar6];
  cVar4 = (&DAT_0236c458)[lVar6];
  param_2[1] = (uint)uVar1;
  cVar5 = (&DAT_0236c459)[lVar6];
  param_2[2] = (uint)uVar2;
  uVar1 = *(ushort *)(&DAT_0236c448 + lVar6);
  uVar7 = *(undefined8 *)(&DAT_0236c460 + lVar6);
  param_2[5] = (int)cVar4;
  uVar2 = *(ushort *)(&DAT_0236c44c + lVar6);
  param_2[6] = (int)cVar5;
  param_2[7] = (uint)uVar1;
  uVar1 = *(ushort *)(&DAT_0236c450 + lVar6);
  cVar4 = (&DAT_0236c45e)[lVar6];
  param_2[8] = (uint)uVar2;
  uVar2 = *(ushort *)(&DAT_0236c454 + lVar6);
  *(undefined8 *)(param_2 + 3) = uVar7;
  param_2[9] = (uint)uVar1;
  param_2[10] = (uint)uVar2;
  uVar1 = *(ushort *)(&DAT_0236c444 + lVar6);
  uVar2 = *(ushort *)(&DAT_0236c446 + lVar6);
  param_2[0xb] = (int)cVar4;
  param_2[0xc] = (uint)uVar1;
  cVar4 = (&DAT_0236c45c)[lVar6];
  cVar5 = (&DAT_0236c45a)[lVar6];
  param_2[0xd] = (uint)uVar2;
  uVar1 = *(ushort *)(&DAT_0236c44e + lVar6);
  uVar7 = *(undefined8 *)(&DAT_0236c468 + lVar6);
  param_2[0x10] = (int)cVar4;
  param_2[0x11] = (uint)uVar1;
  cVar4 = (&DAT_0236c45b)[lVar6];
  uVar1 = *(ushort *)(&DAT_0236c44a + lVar6);
  *(undefined8 *)(param_2 + 0xe) = uVar7;
  param_2[0x12] = (int)cVar5;
  param_2[0x13] = (int)cVar4;
  uVar2 = *(ushort *)(&DAT_0236c452 + lVar6);
  uVar3 = *(ushort *)(&DAT_0236c456 + lVar6);
  param_2[0x14] = (uint)uVar1;
  param_2[0x15] = (uint)uVar2;
  param_2[0x16] = (uint)uVar3;
  return &DAT_0235af6c;
}


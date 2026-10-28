// rea decompile_all
// name: thunk_FUN_03f62244
// address: 0x75304e8
// body: available
// range: 0x75304e8-0x75304eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool thunk_FUN_03f62244(long param_1,long param_2)

{
  undefined *puVar1;
  short sVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  byte abStack_48 [16];
  void *pvStack_38;
  
  FUN_03f926e8(abStack_48,param_2 + 0x14);
  pvVar3 = (void *)((ulong)abStack_48 | 1);
  if ((abStack_48[0] & 1) != 0) {
    pvVar3 = pvStack_38;
  }
  pvVar3 = bsearch(pvVar3,&DAT_02355ff8,0x153,4,(__compar_fn_t)&LAB_03f62550);
  if (pvVar3 != (void *)0x0) {
    lVar5 = (long)(int)*(short *)((long)pvVar3 + 2) * 0x38;
    sVar2 = *(short *)(&DAT_02356562 + lVar5);
    uVar4 = il2cpp_string_new(&DAT_0235af6c + *(ushort *)(&DAT_02356550 + lVar5));
    FUN_03f5ef9c(param_1 + 0x10,uVar4);
    lVar5 = 0;
    puVar1 = &DAT_0237112e + (long)(int)sVar2 * 0x108;
    if (puVar1 != (undefined *)0x0) {
      do {
        if (*(short *)(puVar1 + lVar5 * 2) == 0) break;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0xe);
      lVar5 = FUN_03f62564(puVar1,lVar5,&DAT_02361593);
    }
    FUN_03f5ef9c(param_1 + 0x18,lVar5);
    lVar5 = 0;
    puVar1 = &DAT_02371188 + (long)(int)sVar2 * 0x108;
    if (puVar1 != (undefined *)0x0) {
      do {
        if (*(short *)(puVar1 + lVar5 * 2) == 0) break;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 8);
      lVar5 = FUN_03f62564(puVar1,lVar5,&DAT_02361593);
    }
    FUN_03f5ef9c(param_1 + 0x20,lVar5);
    lVar5 = 0;
    iVar6 = (int)sVar2;
    puVar1 = &DAT_0237114a + (long)iVar6 * 0x108;
    if (puVar1 != (undefined *)0x0) {
      do {
        if (*(short *)(puVar1 + lVar5 * 2) == 0) break;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 10);
      lVar5 = FUN_03f62564(puVar1,lVar5,&DAT_02361593);
    }
    FUN_03f5ef9c(param_1 + 0x28,lVar5);
    uVar4 = il2cpp_string_new(&DAT_02361593 + *(ushort *)(&DAT_02371090 + (long)iVar6 * 0x108));
    FUN_03f5ef9c(param_1 + 0x30,uVar4);
    uVar4 = FUN_03f62564(&UNK_02371096 + (long)iVar6 * 0x108,7,"");
    FUN_03f5ef9c(param_1 + 0x50,uVar4);
    uVar4 = FUN_03f62564(&UNK_023710a4 + (long)iVar6 * 0x108,7,"");
    FUN_03f5ef9c(param_1 + 0x58,uVar4);
    iVar6 = (int)sVar2;
    uVar4 = FUN_03f62564(&UNK_023710b2 + (long)iVar6 * 0x108,7,"");
    FUN_03f5ef9c(param_1 + 0x60,uVar4);
    uVar4 = FUN_03f62564(&UNK_023710c0 + (long)iVar6 * 0x108,0xd,"");
    FUN_03f5ef9c(param_1 + 0x68,uVar4);
    uVar4 = FUN_03f62564(&UNK_023710f4 + (long)iVar6 * 0x108,0xd,"");
    FUN_03f5ef9c(param_1 + 0x70,uVar4);
    uVar4 = FUN_03f62564(&UNK_023710da + (long)iVar6 * 0x108,0xd,"");
    FUN_03f5ef9c(param_1 + 0x78,uVar4);
    uVar4 = FUN_03f62564(&UNK_0237110e + (long)iVar6 * 0x108,0xd,"");
    FUN_03f5ef9c(param_1 + 0x80,uVar4);
  }
  if ((abStack_48[0] & 1) != 0) {
    operator_delete(pvStack_38);
  }
  return pvVar3 != (void *)0x0;
}


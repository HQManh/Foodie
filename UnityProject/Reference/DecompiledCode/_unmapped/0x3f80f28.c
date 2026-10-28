// rea decompile_all
// name: FUN_03f80f28
// address: 0x3f80f28
// body: available
// range: 0x3f80f28-0x3f810a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f80f28(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 local_40;
  long local_38;
  
  uVar2 = FUN_03fbc984();
  if ((uVar2 & 1) == 0) {
    if (DAT_09534898 == '\0') {
      FUN_03f5d894(&local_40,&DAT_095348a0);
      if (DAT_09534898 == '\0') {
        puVar3 = operator_new(0x48);
        puVar3[8] = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
        puVar3[7] = 0;
        puVar3[6] = 0;
        FUN_03f88034(puVar3 + 6);
        FUN_03f87d6c(puVar3 + 7);
        DAT_095348f0 = puVar3;
        uVar4 = FUN_03f5da88(0xc00,0);
        puVar3 = DAT_095348f0;
        DAT_095348f0[4] = uVar4;
        *(undefined4 *)(puVar3 + 5) = 0;
        puVar3[1] = &LAB_03f80abc;
        *puVar3 = FUN_03f809cc;
        puVar3[3] = FUN_03f80c7c;
        puVar3[2] = &LAB_03f80c00;
        pipe((int *)(puVar3 + 8));
        fcntl(*(int *)(DAT_095348f0 + 8),4,0x800);
        (*(code *)*DAT_095348f0)(*(undefined4 *)(DAT_095348f0 + 8));
        FUN_03faf950(&LAB_03f82b54,0,1,0x40000);
        DAT_09534898 = '\x01';
      }
      FUN_03f5d920(&local_40);
    }
    FUN_03f85e5c(DAT_095348f0 + 6);
    puVar5 = (undefined4 *)FUN_03f810e8();
    local_40 = param_1;
    local_38 = FUN_03f8816c(param_1);
    if (local_38 == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = 1;
      uVar1 = FUN_03f88160();
      puVar5[2] = uVar1;
    }
    FUN_03f5ef9c(puVar5 + 4,param_2);
    DataMemoryBarrier(2,3);
    FUN_03f81130();
    FUN_03f85e64(DAT_095348f0 + 6);
    FUN_03f73f40(&local_40);
  }
  return;
}


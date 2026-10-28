// rea decompile_all
// name: FUN_03f7cb24
// address: 0x3f7cb24
// body: available
// range: 0x3f7cb24-0x3f7cd0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f7cb24(long *param_1,int param_2,long param_3,ulong param_4)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [8];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  FUN_03f5fbb4();
  if (param_2 == 1) {
    uVar3 = *(ulong *)(param_3 + 0x58);
  }
  else {
    uVar3 = 4;
    while ((uVar3 < param_4 ||
           ((ulong)(long)(*(float *)(param_1 + 2) * (float)uVar3) <=
            (ulong)(*(long *)(param_3 + 0x60) - *(long *)(param_3 + 0x38))))) {
      uVar3 = uVar3 << 1;
    }
  }
  if ((ulong)param_1[0xb] < uVar3) {
    FUN_03f7cd0c(param_1 + 8);
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = (long)((float)((ulong)param_1[2] >> 0x20) * (float)(ulong)param_1[0xb]);
    *param_1 = (long)((float)param_1[2] * (float)(ulong)param_1[0xb]);
  }
  FUN_03f7ce14(auStack_88,param_3);
  while( true ) {
    local_c8 = *(long *)(param_3 + 0x40);
    local_c0 = *(long *)(param_3 + 0x48);
    local_90 = 0;
    local_b0 = 0;
    local_d0 = param_3;
    local_b8 = local_c0;
    lStack_a8 = local_c8;
    local_a0 = local_c0;
    lStack_98 = local_c0;
    FUN_03f7ce88(&local_d0);
    if ((((local_80 == local_c8) && (local_78 == local_c0)) && (local_70 == local_b8)) &&
       ((local_70 == local_78 || (local_68 == local_b0)))) break;
    uVar3 = FUN_03f7f990(*(long *)(local_68 + 8) + 0x20);
    lVar5 = 1;
    while( true ) {
      uVar3 = uVar3 & param_1[0xb] - 1U;
      uVar4 = uVar3 % 0x30;
      lVar1 = param_1[8] + (uVar3 / 0x30) * 0x10;
      if ((*(byte *)(lVar1 + (uVar4 >> 3) + 10) >> (uVar4 & 7) & 1) == 0) break;
      uVar3 = lVar5 + uVar3;
      lVar5 = lVar5 + 1;
    }
    uVar2 = *(ushort *)(lVar1 + 8);
    FUN_03f60090(lVar1,uVar4,local_68);
    local_68 = local_68 + 0x18;
    param_1[0xc] = (param_1[0xc] - (ulong)uVar2) +
                   (ulong)*(ushort *)(param_1[8] + (uVar3 / 0x30) * 0x10 + 8);
    FUN_03f5ff78(&local_80);
    FUN_03f7ce88(auStack_88);
  }
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  return;
}


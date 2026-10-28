// rea decompile_all
// name: FUN_03fb0778
// address: 0x3fb0778
// body: available
// range: 0x3fb0778-0x3fb09b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb0778(long *param_1,int param_2,long param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  
  FUN_03f5fbb4();
  if (param_2 == 1) {
    uVar4 = *(ulong *)(param_3 + 0x58);
  }
  else {
    uVar4 = 4;
    while ((uVar4 < param_4 ||
           ((ulong)(long)(*(float *)(param_1 + 2) * (float)uVar4) <=
            (ulong)(*(long *)(param_3 + 0x60) - *(long *)(param_3 + 0x38))))) {
      uVar4 = uVar4 << 1;
    }
  }
  if ((ulong)param_1[0xb] < uVar4) {
    FUN_03fb0cc8(param_1 + 8);
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = (long)((float)((ulong)param_1[2] >> 0x20) * (float)(ulong)param_1[0xb]);
    *param_1 = (long)((float)param_1[2] * (float)(ulong)param_1[0xb]);
  }
  FUN_03fb0dd0(auStack_98,param_3);
  do {
    local_d8 = *(long *)(param_3 + 0x40);
    local_d0 = *(long *)(param_3 + 0x48);
    local_a0 = 0;
    local_c0 = 0;
    local_e0 = param_3;
    local_c8 = local_d0;
    lStack_b8 = local_d8;
    local_b0 = local_d0;
    lStack_a8 = local_d0;
    FUN_03fb0e44(&local_e0);
    if ((((local_90 == local_d8) && (local_88 == local_d0)) && (local_80 == local_c8)) &&
       ((local_80 == local_88 || (local_78 == local_c0)))) {
      *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
      return;
    }
    bVar2 = **(byte **)(local_78 + 8);
    uVar4 = 0x7aa162a16fe;
    if (bVar2 != 0) {
      uVar4 = 0x1505;
      uVar7 = 0x1505;
      pbVar5 = *(byte **)(local_78 + 8);
      do {
        uVar7 = uVar7 * 0x21 ^ (ulong)bVar2;
        if ((ulong)pbVar5[1] == 0) break;
        bVar2 = pbVar5[2];
        uVar4 = uVar4 * 0x21 ^ (ulong)pbVar5[1];
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      uVar4 = uVar7 + uVar4 * 0x5d588b65;
    }
    lVar6 = 1;
    while( true ) {
      uVar4 = uVar4 & param_1[0xb] - 1U;
      lVar1 = param_1[8] + (uVar4 / 0x30) * 0x10;
      if ((*(byte *)(lVar1 + (uVar4 % 0x30 >> 3) + 10) >> (uVar4 % 0x30 & 7) & 1) == 0) break;
      uVar4 = lVar6 + uVar4;
      lVar6 = lVar6 + 1;
    }
    uVar3 = *(ushort *)(lVar1 + 8);
    FUN_03f60090();
    local_78 = local_78 + 0x18;
    param_1[0xc] = (param_1[0xc] - (ulong)uVar3) +
                   (ulong)*(ushort *)(param_1[8] + (uVar4 / 0x30) * 0x10 + 8);
    FUN_03f5ff78(&local_90);
    FUN_03fb0e44(auStack_98);
  } while( true );
}


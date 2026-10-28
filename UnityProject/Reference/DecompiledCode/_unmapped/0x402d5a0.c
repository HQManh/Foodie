// rea decompile_all
// name: FUN_0402d5a0
// address: 0x402d5a0
// body: available
// range: 0x402d5a0-0x402d653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0402d5a0(byte *param_1,long param_2,undefined4 *param_3,int param_4)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  char *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 *local_40;
  undefined8 uStack_38;
  byte *local_30;
  ulong uStack_28;
  
  uVar2 = *(ulong *)(param_1 + 8);
  pbVar8 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar8 = param_1 + 1;
    uVar2 = (ulong)(*param_1 >> 1);
  }
  uVar11 = param_2 - (long)pbVar8;
  if (uVar11 <= uVar2) {
    FUN_03fe2af8(param_1,uVar11,1);
    return pbVar8 + uVar11;
  }
  auVar13 = FUN_03f695e8();
  pbVar6 = auVar13._0_8_;
  uStack_38 = 0x402d5f8;
  bVar4 = (*pbVar6 & 1) != 0;
  pbVar1 = pbVar6 + 4;
  if (bVar4) {
    pbVar1 = *(byte **)(pbVar6 + 0x10);
  }
  lVar12 = auVar13._8_8_ - (long)pbVar1;
  uVar2 = (ulong)(*pbVar6 >> 1);
  if (bVar4) {
    uVar2 = *(ulong *)(pbVar6 + 8);
  }
  uVar9 = lVar12 >> 2;
  local_30 = pbVar8;
  uStack_28 = uVar11;
  if (uVar2 < uVar9) {
    local_40 = &stack0xffffffffffffffe0;
    auVar13 = FUN_03fe365c();
    pcVar10 = auVar13._8_8_;
    pcStack_78 = FUN_0402d654;
    if (auVar13._0_8_ != pcVar10) {
      puStack_80 = (undefined1 *)&local_40;
      piVar7 = (int *)__errno();
      iVar3 = *piVar7;
      *piVar7 = 0;
      if (((bRam000000000974a4b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(0x974a4b8), iVar5 != 0))
      {
        p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(0x974a4b8);
      }
      pbVar8 = (byte *)strtoll_l(auVar13._0_8_,&pcStack_88,param_4,p_Ram000000000974a4b0);
      if (*piVar7 == 0) {
        *piVar7 = iVar3;
        if (pcStack_88 == pcVar10) {
          return pbVar8;
        }
      }
      else if (pcStack_88 == pcVar10) {
        if (*piVar7 != 0x22) {
          return pbVar8;
        }
        *param_3 = 4;
        if (0 < (long)pbVar8) {
          return (byte *)0x7fffffffffffffff;
        }
        return (byte *)0x8000000000000000;
      }
    }
    *param_3 = 4;
    return (byte *)0x0;
  }
  local_40 = &stack0xffffffffffffffe0;
  FUN_03fe5114(pbVar6,uVar9,1);
  return pbVar1 + lVar12;
}


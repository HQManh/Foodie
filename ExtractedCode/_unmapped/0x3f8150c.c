// rea decompile_all
// name: FUN_03f8150c
// address: 0x3f8150c
// body: available
// range: 0x3f8150c-0x3f816c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8150c(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  void *local_48;
  void *local_40;
  undefined8 local_38;
  
  FUN_03f80ef4();
  if (DAT_095348f8 != '\0') {
    while (lVar6 = DAT_09534880, DAT_09515568 != 2) {
      FUN_03fafc80(1);
    }
    uVar5 = 0;
    local_48 = (void *)0x0;
    local_40 = (void *)0x0;
    local_38 = 0;
    do {
      iVar3 = (int)uVar5;
      uVar5 = FUN_0404bd00(uVar5,iVar3 + 1,lVar6 + 0xa0);
      iVar2 = (int)uVar5;
      if (iVar2 == iVar3) break;
    } while (iVar2 != 2);
    while (iVar2 != 0) {
      FUN_03fe02a8(lVar6 + 0xa0,2,0xffffffff);
      iVar2 = FUN_0404be70(2,lVar6 + 0xa0);
    }
    if (&local_48 != (void **)(DAT_09534880 + 0x70)) {
      FUN_03f848fc(&local_48,*(long *)(DAT_09534880 + 0x70),*(long *)(DAT_09534880 + 0x78),
                   *(long *)(DAT_09534880 + 0x78) - *(long *)(DAT_09534880 + 0x70) >> 3);
    }
    lVar6 = DAT_09534880;
    iVar3 = FUN_0404bea0(0,DAT_09534880 + 0xa0);
    if (iVar3 == 2) {
      FUN_03fe0300(lVar6 + 0xa0,1,0);
    }
    if (local_40 != local_48) {
      uVar7 = 0;
      uVar9 = 1;
      do {
        lVar8 = *(long *)((long)local_48 + uVar7 * 8);
        lVar6 = FUN_03faf580();
        if (lVar6 != lVar8) {
          FUN_03fafc0c(lVar8);
        }
        bVar1 = uVar9 < (ulong)((long)local_40 - (long)local_48 >> 3);
        uVar7 = uVar9;
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (bVar1);
    }
    lVar6 = DAT_09534880;
    iVar3 = *(int *)(DAT_09534880 + 0x98);
    do {
      if (iVar3 == 0) {
        DataMemoryBarrier(2,3);
        break;
      }
      iVar2 = iVar3;
      if (0xfffe < iVar3) {
        iVar2 = 0xffff;
      }
      iVar4 = FUN_0404bcc0(iVar3,iVar3 - iVar2,lVar6 + 0x98);
      if (iVar4 == iVar3) {
        FUN_0404bf90(iVar2,lVar6 + 0x9c);
        FUN_03fe0300(lVar6 + 0x9c,iVar2,0);
        break;
      }
      iVar3 = iVar4;
    } while (0 < iVar4);
    if (local_48 != (void *)0x0) {
      local_40 = local_48;
      operator_delete(local_48);
    }
  }
  return;
}


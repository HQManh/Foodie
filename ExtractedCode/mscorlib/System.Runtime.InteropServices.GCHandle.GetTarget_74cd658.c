// rea decompile_all
// name: System.Runtime.InteropServices.GCHandle$$GetTarget
// address: 0x74cd658
// body: available
// range: 0x74cd658-0x74cd65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_InteropServices_GCHandle__GetTarget(ulong param_1)

{
  int iVar1;
  int iVar2;
  pthread_t pVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  uVar7 = param_1 & 0xffffffffffffe000;
  if (*(byte *)(uVar7 + 0x20) < 4) {
    uVar8 = (param_1 & 0x1fff) - 0x28;
    pVar3 = pthread_self();
    if (pVar3 == DAT_09534308) {
      DAT_09534310 = DAT_09534310 + 1;
      pVar3 = DAT_09534308;
    }
    else {
      uVar4 = 0;
      do {
        iVar2 = (int)uVar4;
        uVar4 = FUN_0404bd00(uVar4,iVar2 + 1,&DAT_095342c8);
        iVar1 = (int)uVar4;
        if (iVar1 == iVar2) break;
      } while (iVar1 != 2);
      while (iVar1 != 0) {
        FUN_03fe02a8(&DAT_095342c8,2,0xffffffff);
        iVar1 = FUN_0404be70(2,&DAT_095342c8);
      }
    }
    DAT_09534308 = pVar3;
    uVar9 = (uint)(uVar8 >> 3);
    if ((uVar9 < *(uint *)(uVar7 + 0x1c)) &&
       ((*(uint *)(*(long *)(uVar7 + 0x10) + (uVar8 >> 8 & 0x7ffffff) * 4) >> (ulong)(uVar9 & 0x1f)
        & 1) != 0)) {
      lVar6 = uVar7 + (uVar8 & 0x7fffffff8);
      if (*(byte *)(uVar7 + 0x20) < 2) {
        lVar5 = FUN_03fd69a8(&LAB_03f5da38,lVar6 + 0x28);
        lVar6 = 0;
        if (lVar5 != -1) {
          lVar6 = lVar5;
        }
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x28);
      }
    }
    else {
      lVar6 = 0;
    }
    if (DAT_09534310 == 0) {
      DAT_09534308 = 0;
      iVar2 = FUN_0404bea0(0);
      if (iVar2 == 2) {
        FUN_03fe0300(&DAT_095342c8,1,0);
      }
    }
    else {
      DAT_09534310 = DAT_09534310 + -1;
    }
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}


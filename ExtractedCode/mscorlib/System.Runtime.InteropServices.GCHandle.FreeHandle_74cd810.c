// rea decompile_all
// name: System.Runtime.InteropServices.GCHandle$$FreeHandle
// address: 0x74cd810
// body: available
// range: 0x74cd810-0x74cd813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_InteropServices_GCHandle__FreeHandle(ulong param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  pthread_t pVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  if ((param_1 != 0) && (uVar8 = param_1 & 0xffffffffffffe000, *(byte *)(uVar8 + 0x20) < 4)) {
    uVar9 = (param_1 & 0x1fff) - 0x28;
    pVar4 = pthread_self();
    if (pVar4 == DAT_09534308) {
      DAT_09534310 = DAT_09534310 + 1;
      pVar4 = DAT_09534308;
    }
    else {
      uVar5 = 0;
      do {
        iVar3 = (int)uVar5;
        uVar5 = FUN_0404bd00(uVar5,iVar3 + 1,&DAT_095342c8);
        iVar2 = (int)uVar5;
        if (iVar2 == iVar3) break;
      } while (iVar2 != 2);
      while (iVar2 != 0) {
        FUN_03fe02a8(&DAT_095342c8,2,0xffffffff);
        iVar2 = FUN_0404be70(2,&DAT_095342c8);
      }
    }
    DAT_09534308 = pVar4;
    uVar10 = (uint)(uVar9 >> 3);
    if (uVar10 < *(uint *)(uVar8 + 0x1c)) {
      lVar6 = *(long *)(uVar8 + 0x10);
      uVar7 = uVar9 >> 8 & 0x7ffffff;
      uVar10 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar6 + uVar7 * 4) & uVar10) != 0) {
        lVar1 = uVar8 + (uVar9 & 0x7fffffff8);
        if (*(byte *)(uVar8 + 0x20) < 2) {
          if (*(long *)(lVar1 + 0x28) != 0) {
            FUN_03f5d9fc(lVar1 + 0x28);
            lVar6 = *(long *)(uVar8 + 0x10);
          }
        }
        else {
          *(undefined8 *)(lVar1 + 0x28) = 0;
        }
        *(int *)(uVar8 + 0x18) = *(int *)(uVar8 + 0x18) + -1;
        *(uint *)(lVar6 + uVar7 * 4) = *(uint *)(lVar6 + uVar7 * 4) & (uVar10 ^ 0xffffffff);
        if (*(int *)(uVar8 + 0x18) == *(int *)(uVar8 + 0x1c) + -1) {
          *(undefined8 *)(uVar8 + 8) =
               *(undefined8 *)(&DAT_09534400 + (ulong)*(byte *)(uVar8 + 0x20) * 8);
          *(ulong *)(&DAT_09534400 + (ulong)*(byte *)(uVar8 + 0x20) * 8) = uVar8;
        }
      }
    }
    if (DAT_09534310 == 0) {
      DAT_09534308 = 0;
      iVar3 = FUN_0404bea0(0);
      if (iVar3 == 2) {
        FUN_03fe0300(&DAT_095342c8,1,0);
        return;
      }
    }
    else {
      DAT_09534310 = DAT_09534310 + -1;
    }
  }
  return;
}


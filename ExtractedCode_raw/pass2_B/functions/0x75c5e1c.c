// rea decompile_all
// name: System.ParseNumbers$$GrabLongs
// address: 0x75c5e1c
// body: available
// range: 0x75c5e1c-0x75c5fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c5fcc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_ParseNumbers__GrabLongs
                (int param_1,long param_2,uint param_3,uint *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  uint uVar8;
  
  if ((DAT_09521d96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d96 = 1;
  }
  if ((param_1 == 10) && ((param_5 & 1) == 0)) {
    uVar3 = *param_4;
    if ((int)param_3 <= (int)uVar3) {
      return 0;
    }
    uVar5 = 0;
    puVar6 = (ushort *)(param_2 + (long)(int)uVar3 * 2);
    lVar7 = (long)(int)param_3 - (long)(int)uVar3;
    do {
      if (param_3 <= uVar3) goto LAB_075c5fcc;
      uVar4 = *puVar6;
      if (9 < uVar4 - 0x30) break;
      if (0xccccccccccccccc < uVar5) goto LAB_075c5ee0;
      uVar3 = uVar3 + 1;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 1;
      *param_4 = uVar3;
      uVar5 = uVar5 * 10 + (ulong)(uVar4 - 0x30);
    } while (lVar7 != 0);
    if (uVar5 < 0x8000000000000001) {
      return uVar5;
    }
LAB_075c5ee0:
    System_ParseNumbers__ThrowOverflowInt64Exception();
  }
  uVar5 = 0x1fffffffffffffff;
  if (param_1 != 8) {
    uVar5 = 0x7fffffffffffffff;
  }
  uVar3 = *param_4;
  uVar2 = 0xfffffffffffffff;
  if (param_1 != 0x10) {
    uVar2 = uVar5;
  }
  if (param_1 == 10) {
    uVar2 = 0x1999999999999999;
  }
  if ((int)param_3 <= (int)uVar3) {
    return 0;
  }
  puVar6 = (ushort *)(param_2 + (long)(int)uVar3 * 2);
  lVar7 = (long)(int)param_3 - (long)(int)uVar3;
  uVar5 = 0;
  while (uVar3 < param_3) {
    uVar4 = *puVar6;
    uVar8 = uVar4 - 0x30;
    if (9 < uVar8) {
      uVar8 = (uint)uVar4;
      if (uVar4 - 0x41 < 0x1a) {
        uVar8 = uVar8 - 0x37;
      }
      else {
        if (0x19 < uVar8 - 0x61) {
          return uVar5;
        }
        uVar8 = uVar8 - 0x57;
      }
    }
    if (param_1 <= (int)uVar8) {
      return uVar5;
    }
    if ((uVar2 < uVar5) || (uVar1 = uVar5 * (long)param_1 + (ulong)uVar8, uVar1 < uVar5)) {
      System_ParseNumbers__ThrowOverflowUInt64Exception();
      uVar5 = System_ParseNumbers__StringToInt();
      return uVar5;
    }
    uVar3 = uVar3 + 1;
    lVar7 = lVar7 + -1;
    puVar6 = puVar6 + 1;
    *param_4 = uVar3;
    uVar5 = uVar1;
    if (lVar7 == 0) {
      return uVar1;
    }
  }
LAB_075c5fcc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


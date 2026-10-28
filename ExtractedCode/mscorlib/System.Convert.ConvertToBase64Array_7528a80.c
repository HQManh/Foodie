// rea decompile_all
// name: System.Convert$$ConvertToBase64Array
// address: 0x7528a80
// body: available
// range: 0x7528a80-0x7528cb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7528cb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7528cb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Convert__ConvertToBase64Array
              (long param_1,long param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  if ((DAT_0952182c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    DAT_0952182c = 1;
  }
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = *(long *)(*(long *)(DAT_09182b88 + 0xb8) + 0x18);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = lVar8 + 0x20;
    iVar7 = 0;
    iVar5 = (param_4 / 3) * 3;
    iVar3 = iVar5 + param_3;
    if (param_3 < iVar3) {
      iVar9 = 0;
      do {
        iVar6 = iVar7;
        if ((param_5 & 1) != 0) {
          if (iVar9 == 0x4c) {
            iVar9 = 0;
            iVar7 = iVar6 + 1;
            *(undefined2 *)(param_1 + (long)iVar6 * 2) = 0xd;
            iVar6 = iVar6 + 2;
            *(undefined2 *)(param_1 + (long)iVar7 * 2) = 10;
          }
          iVar9 = iVar9 + 4;
        }
        *(undefined2 *)(param_1 + (long)iVar6 * 2) =
             *(undefined2 *)(((ulong)(*(byte *)(param_2 + param_3) >> 1) & 0x7e) + lVar2);
        iVar7 = param_3 + 1;
        *(undefined2 *)(param_1 + (long)(iVar6 + 1) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(param_2 + iVar7) >> 4) |
                              (*(byte *)(param_2 + param_3) & 3) << 4) * 2);
        iVar1 = param_3 + 2;
        param_3 = param_3 + 3;
        *(undefined2 *)(param_1 + (long)(iVar6 + 2) * 2) =
             *(undefined2 *)
              (lVar2 + (ulong)((uint)(*(byte *)(param_2 + iVar1) >> 6) |
                              (*(byte *)(param_2 + iVar7) & 0xf) << 2) * 2);
        iVar7 = iVar6 + 4;
        *(undefined2 *)(param_1 + (long)(iVar6 + 3) * 2) =
             *(undefined2 *)(((ulong)*(byte *)(param_2 + iVar1) & 0x3f) * 2 + lVar2);
      } while (param_3 < iVar3);
      if (((param_4 != iVar5) && ((param_5 & 1) != 0)) && (iVar9 == 0x4c)) {
        *(undefined2 *)(param_1 + (long)iVar7 * 2) = 0xd;
        iVar7 = iVar6 + 6;
        *(undefined2 *)(param_1 + (long)(iVar6 + 5) * 2) = 10;
      }
    }
    if (param_4 % 3 == 1) {
      *(undefined2 *)(param_1 + (long)iVar7 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(param_2 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(param_1 + (long)(iVar7 + 1) * 2) =
           *(undefined2 *)(((ulong)*(byte *)(param_2 + iVar3) & 3) * 0x20 + lVar2);
      uVar4 = *(undefined2 *)(lVar8 + 0xa0);
      *(undefined2 *)(param_1 + (long)(iVar7 + 2) * 2) = uVar4;
    }
    else {
      if (param_4 % 3 != 2) {
        return iVar7;
      }
      *(undefined2 *)(param_1 + (long)iVar7 * 2) =
           *(undefined2 *)(((ulong)(*(byte *)(param_2 + iVar3) >> 1) & 0x7e) + lVar2);
      *(undefined2 *)(param_1 + (long)(iVar7 + 1) * 2) =
           *(undefined2 *)
            (lVar2 + (ulong)((uint)(*(byte *)(param_2 + (iVar3 + 1)) >> 4) |
                            (*(byte *)(param_2 + iVar3) & 3) << 4) * 2);
      *(undefined2 *)(param_1 + (long)(iVar7 + 2) * 2) =
           *(undefined2 *)(((ulong)*(byte *)(param_2 + (iVar3 + 1)) & 0xf) * 8 + lVar2);
      uVar4 = *(undefined2 *)(lVar8 + 0xa0);
    }
    *(undefined2 *)(param_1 + (long)(iVar7 + 3) * 2) = uVar4;
    return iVar7 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


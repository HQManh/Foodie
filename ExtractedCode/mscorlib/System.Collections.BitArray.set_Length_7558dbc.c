// rea decompile_all
// name: System.Collections.BitArray$$set_Length
// address: 0x7558dbc
// body: available
// range: 0x7558dbc-0x7558f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7558ecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7558f48 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7558f4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_BitArray__set_Length(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  int local_24;
  
  if ((DAT_0952196e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c05e0);
    DAT_0952196e = 1;
  }
  if (param_2 < 0) {
    local_24 = param_2;
    uVar7 = FUN_03f5c42c(DAT_09535420,&local_24);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09225370);
    uVar10 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar9,uVar7,uVar10,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091c3e90);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar7);
  }
  plVar11 = (long *)(param_1 + 0x10);
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = (param_2 - 1U >> 5) + 1;
  }
  if (*plVar11 != 0) {
    iVar4 = *(int *)(*plVar11 + 0x18);
    if ((iVar4 < iVar3) || (iVar3 + 0x100 < iVar4)) {
      FUN_0492d498(plVar11,iVar3,DAT_091c05e0);
    }
    uVar5 = *(uint *)(param_1 + 0x18);
    if ((int)uVar5 < param_2) {
      lVar6 = *plVar11;
      iVar4 = 0;
      if (0 < (int)uVar5) {
        iVar4 = (uVar5 - 1 >> 5) + 1;
      }
      uVar2 = uVar5 & 0x1f;
      if (-1 < (int)-uVar5) {
        uVar2 = -(-uVar5 & 0x1f);
      }
      if (0 < (int)uVar2) {
        if (lVar6 == 0) goto LAB_07558ecc;
        if (*(uint *)(lVar6 + 0x18) <= iVar4 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar1 = lVar6 + (ulong)(iVar4 - 1U) * 4;
        *(uint *)(lVar1 + 0x20) =
             *(uint *)(lVar1 + 0x20) & (-1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
      }
      System_Array__Clear(lVar6,iVar4,iVar3 - iVar4,0);
    }
    *(int *)(param_1 + 0x18) = param_2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    return;
  }
LAB_07558ecc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: System.Collections.BitArray$$.ctor
// address: 0x75587f0
// body: available
// range: 0x75587f0-0x755893f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75588bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7558938 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755893c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_BitArray___ctor(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  int local_24;
  
  if ((DAT_0952196c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_0952196c = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 < 0) {
    local_24 = param_2;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921e638);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,uVar6,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c3e68);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (param_2 - 1U >> 5) + 1;
  }
  lVar2 = FUN_03f5c394(DAT_091801b8,iVar1);
  plVar11 = (long *)(param_1 + 0x10);
  *plVar11 = lVar2;
  thunk_FUN_03f5d7b8(plVar11,lVar2);
  lVar2 = *plVar11;
  *(int *)(param_1 + 0x18) = param_2;
  if (lVar2 != 0) {
    uVar8 = (uint)*(ulong *)(lVar2 + 0x18);
    if (0 < (int)uVar8) {
      uVar7 = (ulong)(uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU));
      uVar9 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      piVar10 = (int *)(lVar2 + 0x20);
      do {
        if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar7 = uVar7 - 1;
        uVar9 = uVar9 - 1;
        *piVar10 = -(param_3 & 1);
        piVar10 = piVar10 + 1;
      } while (uVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


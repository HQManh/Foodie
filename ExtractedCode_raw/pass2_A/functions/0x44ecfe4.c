// rea decompile_all
// name: CW.Common.CwHelper$$SetTempMaterial
// address: 0x44ecfe4
// body: available
// range: 0x44ecfe4-0x44ed137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ed110 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44ed130 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44ed134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CW_Common_CwHelper__SetTempMaterial(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_095183ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091ae608);
    FUN_03f5c2a4(&DAT_091ae658);
    FUN_03f5c2a4(&DAT_091ae618);
    DAT_095183ee = 1;
  }
  if (*(int *)(DAT_09183140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(DAT_09183140 + 0xb8);
  lVar5 = *(long *)(lVar4 + 8);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      lVar4 = *(long *)(DAT_09183140 + 0xb8);
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
        lVar4 = *(long *)(DAT_09183140 + 0xb8);
      }
      lVar5 = DAT_091ae608;
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          if (uVar2 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
            *puVar3 = param_1;
            thunk_FUN_03f5d7b8(puVar3,param_1);
            return;
          }
          FUN_057e0c68(lVar4,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


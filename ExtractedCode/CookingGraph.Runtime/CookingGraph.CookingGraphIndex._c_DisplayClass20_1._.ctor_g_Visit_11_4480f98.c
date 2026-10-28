// rea decompile_all
// name: CookingGraph.CookingGraphIndex.<>c__DisplayClass20_1$$<.ctor>g__Visit|11
// address: 0x4480f98
// body: available
// range: 0x4480f98-0x448115b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4481150 to 0x57971a8 FUN_057971a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4481154 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4481158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphIndex_<>c__DisplayClass20_1__<_ctor>g__Visit_11
               (long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  
  if ((DAT_095180e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c00b0);
    FUN_03f5c2a4(&DAT_091adc88);
    DAT_095180e1 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= param_2) {
LAB_04481154:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    pcVar5 = (char *)(lVar4 + (int)param_2 + 0x20);
    if (*pcVar5 != '\0') {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    *pcVar5 = '\x01';
    lVar4 = DAT_091c00b0;
    if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
       (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
      if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_04481154;
      lVar6 = *(long *)(lVar6 + (long)(int)param_2 * 8 + 0x20);
      if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x30), lVar6 == 0)) {
        lVar6 = *(long *)(DAT_091c00b0 + 0x38);
        if (lVar6 == 0) {
          FUN_03f95ac8(DAT_091c00b0);
          lVar6 = *(long *)(lVar4 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar6 = **(long **)(lVar4 + 0xb8);
        if (lVar6 == 0) goto LAB_04481158;
      }
      if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
        uVar7 = 0;
        uVar2 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar2 <= uVar7) goto LAB_04481154;
          CookingGraph_CookingGraphIndex_<>c__DisplayClass20_1__<_ctor>g__Visit_11
                    (param_1,*(undefined8 *)(lVar6 + 0x20 + uVar7 * 8));
          uVar2 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      lVar4 = DAT_091adc88;
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 != 0) {
        lVar3 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(uint *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = param_2;
            return;
          }
          FUN_057971a8(lVar6,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_04481158:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


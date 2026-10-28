// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelNode$$SetScaleAndTintImmediate
// address: 0x434d96c
// body: available
// range: 0x434d96c-0x434da93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434da74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434da90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelNode__SetScaleAndTintImmediate
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_6 + 0xa0);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  if (lVar4 != 0) {
    lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localScale
              (*(float *)(lVar1 + 0xc) * param_1,*(float *)(lVar1 + 0x10) * param_1,
               *(float *)(lVar1 + 0x14) * param_1,lVar4,0);
    lVar4 = *(long *)(param_6 + 0x98);
    if (lVar4 == 0) {
      return;
    }
    lVar1 = 0;
    lVar2 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar2) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar2) {
LAB_0434da90:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = *(long *)(param_6 + 0xb0);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= (int)(lVar2 + 1) - 1U) goto LAB_0434da90;
      lVar4 = *(long *)(lVar4 + lVar2 * 8 + 0x20);
      if (lVar4 == 0) break;
      lVar3 = lVar3 + lVar1;
      lVar1 = lVar1 + 0x10;
      UnityEngine_SpriteRenderer__set_color
                (param_2 * *(float *)(lVar3 + 0x20),param_3 * *(float *)(lVar3 + 0x24),
                 param_4 * *(float *)(lVar3 + 0x28),param_5 * *(float *)(lVar3 + 0x2c),lVar4,0);
      lVar4 = *(long *)(param_6 + 0x98);
      lVar2 = lVar2 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


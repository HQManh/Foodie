// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewerOnOrder.<>c__DisplayClass18_0$$<GenerateItem>b__0
// address: 0x41c2640
// body: available
// range: 0x41c2640-0x41c272f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c2728 to 0x866cdcc UnityEngine.Transform$$set_rotation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c272c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewerOnOrder_<>c__DisplayClass18_0__<GenerateItem>b__0
               (long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar1 != 0)) {
    UnityEngine_Transform__set_position
              (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20),lVar1,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      if (lVar1 != 0) {
        uVar3 = NEON_fmov(0x3fa00000,4);
        uVar5 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
        fVar4 = (float)((ulong)uVar5 >> 0x20) * (float)((ulong)uVar3 >> 0x20);
        UnityEngine_Transform__set_localScale
                  (CONCAT44(fVar4,(float)uVar5 * (float)uVar3),fVar4,
                   *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 1.25,lVar1,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          lVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0);
          if (((*(long *)(param_1 + 0x28) != 0) &&
              (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0), lVar2 != 0
              )) && (UnityEngine_Transform__get_rotation(lVar2,0), lVar1 != 0)) {
            UnityEngine_Transform__set_rotation(lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$AdvanceSegmentScroll
// address: 0x40f1be4
// body: available
// range: 0x40f1be4-0x40f1c9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f1c84 to 0x40f21a8 AnhPD.FoodOrder.IngredientSpawnerController$$WriteSegmentScroll (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40f1c98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__AdvanceSegmentScroll
               (float param_1,long param_2,long param_3,ulong param_4)

{
  float fVar1;
  float fVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 0x68) != '\0') {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(param_3 + 0x28) == '\0') {
      *(undefined1 *)(param_3 + 0x28) = 1;
      AnhPD_FoodOrder_IngredientSpawnerController__WriteSegmentScroll(param_2,param_3,1);
    }
    if ((0.0 < param_1) && ((param_4 & 1) != 0)) {
      fVar1 = (float)*(undefined8 *)(param_3 + 0x20) +
              (float)*(undefined8 *)(param_2 + 0x50) * param_1;
      fVar2 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) +
              (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) * param_1;
      fVar1 = fVar1 - (float)(int)fVar1;
      fVar2 = fVar2 - (float)(int)fVar2;
      uVar3 = NEON_fmov(0x3f800000,4);
      iVar4 = -(uint)(fVar1 < 0.0);
      iVar5 = -(uint)(fVar2 < 0.0);
      uVar3 = CONCAT44(fVar2,fVar1) ^
              (CONCAT44(fVar2,fVar1) ^ uVar3) &
              CONCAT44(-(uint)((float)(uVar3 >> 0x20) < fVar2),-(uint)((float)uVar3 < fVar1));
      *(ulong *)(param_3 + 0x20) =
           CONCAT17((byte)(uVar3 >> 0x38) & ~(byte)((uint)iVar5 >> 0x18),
                    CONCAT16((byte)(uVar3 >> 0x30) & ~(byte)((uint)iVar5 >> 0x10),
                             CONCAT15((byte)(uVar3 >> 0x28) & ~(byte)((uint)iVar5 >> 8),
                                      CONCAT14((byte)(uVar3 >> 0x20) & ~(byte)iVar5,
                                               CONCAT13((byte)(uVar3 >> 0x18) &
                                                        ~(byte)((uint)iVar4 >> 0x18),
                                                        CONCAT12((byte)(uVar3 >> 0x10) &
                                                                 ~(byte)((uint)iVar4 >> 0x10),
                                                                 CONCAT11((byte)(uVar3 >> 8) &
                                                                          ~(byte)((uint)iVar4 >> 8),
                                                                          (byte)uVar3 & ~(byte)iVar4
                                                                         )))))));
      AnhPD_FoodOrder_IngredientSpawnerController__WriteSegmentScroll(param_2,param_3,0);
      return;
    }
  }
  return;
}


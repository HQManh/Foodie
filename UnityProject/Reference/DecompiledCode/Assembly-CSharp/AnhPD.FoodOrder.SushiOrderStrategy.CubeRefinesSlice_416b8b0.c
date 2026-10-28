// rea decompile_all
// name: AnhPD.FoodOrder.SushiOrderStrategy$$CubeRefinesSlice
// address: 0x416b8b0
// body: available
// range: 0x416b8b0-0x416babb inclusive
// range: 0x416bafc-0x416bb1b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416bab4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416bab8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_SushiOrderStrategy__CubeRefinesSlice(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  if ((DAT_095165a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f50);
    FUN_03f5c2a4(&DAT_091a3f58);
    FUN_03f5c2a4(&DAT_091a3f60);
    FUN_03f5c2a4(&DAT_091af660);
    FUN_03f5c2a4(&DAT_091af628);
    FUN_03f5c2a4(&DAT_0917e018);
    FUN_03f5c2a4(&DAT_0918b670);
    FUN_03f5c2a4(&DAT_091f0ab0);
    FUN_03f5c2a4(&DAT_09194d38);
    DAT_095165a8 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09194d38);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),param_1);
  if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = AnhPD_FoodOrder_SushiOrderStrategy__get_Config();
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x28);
    uVar1 = 0;
    if (lVar3 == 0) goto LAB_0416bb00;
    uVar4 = thunk_FUN_03f9944c(DAT_0917e018);
    FUN_05d78cfc(uVar4,lVar2,DAT_091f0ab0,0);
    lVar2 = FUN_057e1328(lVar3,uVar4,DAT_091af660);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x18) != 0)) {
      FUN_057e185c(&local_58,*(long *)(lVar2 + 0x18),DAT_091af628);
      while (uVar1 = FUN_071bd28c(&local_58,DAT_091a3f58), (uVar1 & 1) != 0) {
        if (((local_48 != 0) && (lVar2 = *(long *)(local_48 + 0x10), lVar2 != 0)) &&
           (0 < (int)*(ulong *)(lVar2 + 0x18))) {
          uVar6 = 0;
          uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar3 = *(long *)(lVar2 + 0x20 + uVar6 * 8);
            if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == 0)) &&
               (uVar5 = System_String__op_Equality(*(undefined8 *)(lVar3 + 0x18),param_2,0),
               (uVar5 & 1) != 0)) goto LAB_0416ba9c;
            uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
      }
LAB_0416ba9c:
      FUN_071bd288(&local_58,DAT_091a3f50);
      goto LAB_0416bb00;
    }
  }
  uVar1 = 0;
LAB_0416bb00:
  return uVar1 & 1;
}


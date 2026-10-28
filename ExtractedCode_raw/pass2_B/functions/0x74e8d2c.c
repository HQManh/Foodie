// rea decompile_all
// name: System.Reflection.Assembly$$InternalGetType
// address: 0x74e8d2c
// body: available
// range: 0x74e8d2c-0x74e8d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Reflection_Assembly__InternalGetType
          (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  byte abStack_138 [16];
  void *pvStack_128;
  undefined1 auStack_120 [232];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_03f92aa4(param_3);
  FUN_03f926e8(abStack_138);
  FUN_03fb728c(auStack_120);
  FUN_03fb5cac(auStack_158,abStack_138,auStack_120,0);
  uVar2 = FUN_03fb5cf4(auStack_158,1);
  if ((uVar2 & 1) == 0) {
    if ((param_4 & 1) == 0) goto LAB_03f65470;
    uVar4 = FUN_03fa6860();
  }
  else {
    if ((param_1 != 0) || ((param_4 & 1) == 0)) {
      if (param_1 == 0) {
LAB_03f65470:
        uVar4 = 0;
      }
      else {
        lVar3 = FUN_03f98700(*(undefined8 *)(param_1 + 0x10));
        if ((lVar3 == 0) && ((param_4 & 1) != 0)) {
          uVar4 = FUN_03fa6884(auStack_120);
          if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
            FUN_03fa5c38(uVar4,0);
          }
          goto LAB_03f65584;
        }
        if (lVar3 == 0) goto LAB_03f65470;
        lVar3 = FUN_03fb5480(lVar3,auStack_120,param_5 & 1);
        if ((lVar3 == 0) && ((param_4 & 1) != 0)) {
          uVar4 = FUN_03fa6884(auStack_120);
          if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
            FUN_03fa5c38(uVar4,0);
          }
          goto LAB_03f65584;
        }
        if (lVar3 == 0) goto LAB_03f65470;
        FUN_03fbea4c(lVar3);
        lVar3 = FUN_03fc11b8(lVar3,auStack_120);
        if ((lVar3 == 0) && ((param_4 & 1) != 0)) {
          uVar4 = FUN_03fa6884(auStack_120);
          if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
            FUN_03fa5c38(uVar4,0);
          }
          goto LAB_03f65584;
        }
        if (lVar3 == 0) goto LAB_03f65470;
        uVar4 = FUN_03f9ab74();
      }
      FUN_03fb72c4(auStack_120);
      if ((abStack_138[0] & 1) != 0) {
        operator_delete(pvStack_128);
      }
      if (*(long *)(lVar1 + 0x28) == lStack_38) {
        return uVar4;
      }
      goto LAB_03f65584;
    }
    uVar4 = FUN_03fa6884(auStack_120);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
    FUN_03fa5c38(uVar4,0);
  }
LAB_03f65584:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


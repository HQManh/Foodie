// rea decompile_all
// name: System.ValueType$$InternalGetHashCode
// address: 0x7610e7c
// body: available
// range: 0x7610e7c-0x7610e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_ValueType__InternalGetHashCode(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar12 = &uStack_60;
  lVar2 = tpidr_el0;
  lStack_58 = *(long *)(lVar2 + 0x28);
  uStack_60 = 0;
  uVar4 = FUN_03f98700();
  uVar10 = uVar4 >> 3;
  lVar5 = FUN_03fbf14c();
  if (lVar5 != 0) {
    uStack_60 = 0;
    lVar5 = FUN_03fbec04(uVar4,&uStack_60);
    if (lVar5 != 0) {
      puVar11 = (undefined1 *)0x0;
      uVar13 = 0;
      do {
        if (((*(byte *)(*(long *)(lVar5 + 8) + 8) >> 4 & 1) == 0) &&
           (uVar6 = FUN_03f5d7a4(lVar5), (uVar6 & 1) == 0)) {
          cVar1 = *(char *)(*(long *)(lVar5 + 8) + 10);
          uVar9 = (uint)uVar10;
          if (cVar1 == '\x0f') {
            uVar10 = (ulong)(uVar9 ^ (uint)(*(ulong *)(param_1 + *(int *)(lVar5 + 0x18)) >> 3));
          }
          else if (cVar1 == '\x0e') {
            if (*(long *)(param_1 + *(int *)(lVar5 + 0x18)) != 0) {
              uVar3 = FUN_03f96760();
              uVar10 = (ulong)(uVar3 ^ uVar9);
            }
          }
          else if (cVar1 == '\b') {
            uVar10 = (ulong)(*(uint *)(param_1 + *(int *)(lVar5 + 0x18)) ^ uVar9);
          }
          else {
            if (puVar11 == (undefined1 *)0x0) {
              lVar7 = FUN_03fbf14c(uVar4);
              puVar12 = (undefined8 *)((long)puVar12 + -(lVar7 * 8 + 0xfU & 0xfffffffffffffff0));
              puVar11 = (undefined1 *)puVar12;
            }
            uVar8 = FUN_03fbae64(lVar5,param_1);
            *(undefined8 *)(puVar11 + (long)(int)uVar13 * 8) = uVar8;
            uVar13 = (ulong)((int)uVar13 + 1);
          }
        }
        lVar5 = FUN_03fbec04(uVar4,&uStack_60);
      } while (lVar5 != 0);
      if (puVar11 != (undefined1 *)0x0) {
        uVar8 = FUN_03f984c8(DAT_095353e8,(long)(int)uVar13);
        FUN_03f5ef9c(param_2,uVar8);
        if (0 < (int)uVar13) {
          lVar5 = 0;
          do {
            *(undefined8 *)(*param_2 + lVar5 + 0x20) = *(undefined8 *)(puVar11 + lVar5);
            FUN_03f5d7b8();
            lVar5 = lVar5 + 8;
          } while (uVar13 << 3 != lVar5);
        }
        goto LAB_03f73af4;
      }
    }
    *param_2 = 0;
  }
LAB_03f73af4:
  if (*(long *)(lVar2 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}


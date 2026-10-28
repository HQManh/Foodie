// rea decompile_all
// name: FUN_03fc2584
// address: 0x3fc2584
// body: available
// range: 0x3fc2584-0x3fc27b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc27b4 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc2584(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 auStack_52 [2];
  
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  lVar7 = *(long *)(DAT_09535b78 + 0x60);
  uVar1 = *(uint *)(DAT_09535b78 + 0x58);
  FUN_03f71cb4(&local_78,(ulong)uVar1);
  if (uVar1 != 0) {
    uVar8 = 0;
    do {
      plVar9 = (long *)(lVar7 + uVar8 * 0x38 + 0x28);
      if ((*plVar9 != 0) &&
         (lVar2 = FUN_03fbe574(*(undefined8 *)(lVar7 + uVar8 * 0x38 + 0x30),1),
         (*(ushort *)(lVar2 + 0x135) >> 0xc & 1) == 0)) {
        lVar10 = *plVar9;
        if (local_70 < local_68) {
          *local_70 = lVar10;
          local_70[1] = lVar2;
          local_70 = local_70 + 2;
        }
        else {
          lVar11 = (long)local_70 - (long)local_78 >> 4;
          uVar6 = lVar11 + 1;
          if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5fa4c(&local_78);
          }
          uVar5 = (long)local_68 - (long)local_78 >> 3;
          if (uVar5 <= uVar6) {
            uVar5 = uVar6;
          }
          if (0x7fffffffffffffef < (ulong)((long)local_68 - (long)local_78)) {
            uVar5 = 0xfffffffffffffff;
          }
          if (uVar5 == 0) {
            auVar12 = ZEXT816(0);
          }
          else {
            auVar12 = FUN_03f71f50(&local_68);
          }
          plVar9 = (long *)(auVar12._0_8_ + lVar11 * 0x10);
          *plVar9 = lVar10;
          plVar9[1] = lVar2;
          plVar4 = plVar9;
          plVar3 = local_70;
          for (; local_70 != local_78; local_70 = local_70 + -2) {
            lVar2 = local_70[-2];
            plVar4[-1] = local_70[-1];
            plVar4[-2] = lVar2;
            plVar4 = plVar4 + -2;
            plVar3 = local_78;
          }
          local_68 = (long *)(auVar12._0_8_ + auVar12._8_8_ * 0x10);
          plVar9 = plVar9 + 2;
          local_78 = plVar4;
          local_70 = plVar9;
          if (plVar3 != (long *)0x0) {
            operator_delete(plVar3);
            local_70 = plVar9;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  if ((DAT_09535b70 != '\0') && (DAT_09535b60 != (void *)0x0)) {
    operator_delete__(DAT_09535b60);
  }
  plVar4 = local_70;
  plVar9 = local_78;
  uVar6 = (long)local_70 - (long)local_78;
  uVar8 = uVar6;
  if ((ulong)((long)uVar6 >> 4) >> 0x3c != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  plVar3 = operator_new__(uVar8);
  if ((plVar4 == plVar9) || (memset(plVar3,0,uVar6), uVar8 = uVar6, plVar4 = plVar3, uVar6 < 0x10))
  {
    lVar7 = 0;
  }
  else {
    do {
      lVar7 = *plVar9;
      uVar8 = uVar8 - 0x10;
      plVar4[1] = plVar9[1];
      *plVar4 = lVar7;
      plVar4 = plVar4 + 2;
      plVar9 = plVar9 + 2;
    } while (uVar8 != 0);
    lVar7 = LZCOUNT((long)uVar6 >> 4) * -2 + 0x7e;
  }
  FUN_03fc9064(plVar3,(long)plVar3 + uVar6,auStack_52,lVar7,1);
  DAT_09535b70 = 1;
  DAT_09535b68 = (long)local_70 - (long)local_78 >> 4;
  DAT_09535b60 = plVar3;
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    operator_delete(local_78);
  }
  return;
}


// rea decompile_all
// name: FUN_03f893dc
// address: 0x3f893dc
// body: available
// range: 0x3f893dc-0x3f8961f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8961c to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03f893dc(long *param_1,int param_2)

{
  void *__src;
  size_t __n;
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  void *__dest;
  bool bVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  bVar10 = -2 < param_2;
  if (-2 < param_2) {
    iVar6 = 0;
    while( true ) {
      local_78 = (undefined8 *)0x0;
      local_70 = (undefined8 *)0x0;
      local_68 = (undefined8 *)0x0;
      if (param_1[1] - *param_1 == 0) break;
      uVar13 = param_1[1] - *param_1 >> 3;
      uVar9 = 0;
      uVar8 = uVar13;
      if (uVar13 < 2) {
        uVar8 = 1;
      }
      do {
        plVar2 = *(long **)(*param_1 + uVar9 * 8);
        uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0);
        if ((uVar3 & 1) != 0) {
          lVar7 = *param_1;
          if (local_70 < local_68) {
            *local_70 = *(undefined8 *)(lVar7 + uVar9 * 8);
            local_70 = local_70 + 1;
          }
          else {
            lVar11 = (long)local_70 - (long)local_78 >> 3;
            uVar3 = lVar11 + 1;
            if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5fa4c(&local_78);
            }
            uVar4 = (long)local_68 - (long)local_78 >> 2;
            if (uVar4 <= uVar3) {
              uVar4 = uVar3;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_68 - (long)local_78)) {
              uVar4 = 0x1fffffffffffffff;
            }
            if (uVar4 == 0) {
              auVar14 = ZEXT816(0);
            }
            else {
              auVar14 = FUN_03f695c0(&local_68);
            }
            puVar5 = (undefined8 *)(auVar14._0_8_ + lVar11 * 8);
            puVar12 = puVar5 + 1;
            *puVar5 = *(undefined8 *)(lVar7 + uVar9 * 8);
            puVar1 = local_70;
            while (local_70 != local_78) {
              local_70 = local_70 + -1;
              puVar5 = puVar5 + -1;
              *puVar5 = *local_70;
              puVar1 = local_78;
            }
            local_68 = (undefined8 *)(auVar14._0_8_ + auVar14._8_8_ * 8);
            local_78 = puVar5;
            local_70 = puVar12;
            if (puVar1 != (undefined8 *)0x0) {
              operator_delete(puVar1);
              local_70 = puVar12;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar8);
      uVar9 = (long)local_70 - (long)local_78 >> 3;
      if (uVar9 != uVar13) {
        if (local_70 != local_78) {
          __dest = (void *)param_1[1];
          lVar7 = 0;
          uVar8 = 0;
          do {
            __dest = (void *)FUN_03f89648(*param_1,__dest,(long)local_78 + lVar7);
            lVar11 = param_1[1] - (long)__dest;
            if (lVar11 != 0) {
              __src = (void *)((long)__dest + lVar11);
              __n = param_1[1] - (long)__src;
              if (__n != 0) {
                memmove(__dest,__src,__n);
              }
              __dest = (void *)((long)__dest + __n);
              param_1[1] = (long)__dest;
            }
            uVar8 = uVar8 + 1;
            lVar7 = lVar7 + 8;
          } while (uVar8 < (ulong)((long)local_70 - (long)local_78 >> 3));
        }
        thunk_FUN_03f8a1a4(10,1);
        iVar6 = iVar6 + 10;
      }
      if (local_78 != (undefined8 *)0x0) {
        local_70 = local_78;
        operator_delete(local_78);
      }
      if (uVar9 == uVar13) {
        return bVar10;
      }
      bVar10 = param_2 == -1 || iVar6 <= param_2;
      if (param_2 != -1 && param_2 < iVar6) {
        return bVar10;
      }
    }
  }
  return bVar10;
}


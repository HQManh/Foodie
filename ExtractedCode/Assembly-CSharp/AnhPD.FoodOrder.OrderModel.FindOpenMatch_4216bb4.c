// rea decompile_all
// name: AnhPD.FoodOrder.OrderModel$$FindOpenMatch
// address: 0x4216bb4
// body: available
// range: 0x4216bb4-0x4216d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4216d38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_OrderModel__FindOpenMatch(long param_1,void *param_2,long param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_98 [72];
  
  if ((DAT_09516cc9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0b0);
    FUN_03f5c2a4(&DAT_091adcb0);
    FUN_03f5c2a4(&DAT_091b3510);
    FUN_03f5c2a4(&DAT_091b3518);
    DAT_09516cc9 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar5) {
        return -1;
      }
      lVar1 = FUN_057e0998(lVar1,iVar5,DAT_091b3518);
      if (lVar1 == 0) break;
      if (*(int *)(lVar1 + 0x58) == 1) {
        if (param_3 == 0) break;
        uVar2 = FUN_05797528(param_3,iVar5,DAT_091adcb0);
        if ((uVar2 & 1) == 0) {
          if (param_4 != (long *)0x0) {
            lVar1 = *param_4;
            uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar2 != 0) {
              piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) == DAT_0917a0b0) {
                  puVar3 = (undefined8 *)(lVar1 + (long)(*piVar4 + 4) * 0x10 + 0x138);
                  goto LAB_04216cd8;
                }
                uVar2 = uVar2 - 1;
                piVar4 = piVar4 + 4;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917a0b0,4);
LAB_04216cd8:
            uVar2 = (*(code *)*puVar3)(param_4,iVar5,puVar3[1]);
            if ((uVar2 & 1) != 0) goto LAB_04216d2c;
          }
          if ((*(long *)(param_1 + 0x10) == 0) ||
             (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x10),iVar5,DAT_091b3518), lVar1 == 0))
          break;
          memcpy(auStack_98,param_2,0x48);
          uVar2 = AnhPD_FoodOrder_OrderSpec__Matches(lVar1 + 0x10,auStack_98,0);
          if ((uVar2 & 1) != 0) {
            return iVar5;
          }
        }
      }
LAB_04216d2c:
      lVar1 = *(long *)(param_1 + 0x10);
      iVar5 = iVar5 + 1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


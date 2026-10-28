// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonObjectContract$$get_HasRequiredOrDefaultValueProperties
// address: 0x76afcb8
// body: available
// range: 0x76afcb8-0x76b0027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b0010 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b0014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b0018 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b001c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b0024 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076b0020) */

undefined1
Newtonsoft_Json_Serialization_JsonObjectContract__get_HasRequiredOrDefaultValueProperties
          (long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong local_78;
  ulong local_70;
  long **pplStack_68;
  long *local_60;
  undefined8 local_58;
  
  if ((DAT_09522691 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4b8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917aca0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b6ce0);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b7370);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6cd8);
    FUN_03f5c2a4(&DAT_091b6cf0);
    FUN_03f5c2a4(&DAT_091b6a60);
    DAT_09522691 = 1;
  }
  local_60 = (long *)0x0;
  local_58 = 0;
  if (*(char *)(param_1 + 0xf9) == '\0') {
    local_70 = local_70 & 0xffffffffffff0000;
    FUN_05c290f8(&local_70,0,DAT_091b6a48);
    local_58 = *(undefined8 *)(param_1 + 200);
    *(undefined2 *)(param_1 + 0xf9) = (undefined2)local_70;
    iVar2 = FUN_05c30b5c(&local_58,0,DAT_091b7370);
    if (iVar2 == 0) {
      if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = (long *)FUN_06c779c4(*(long *)(param_1 + 0xd8),DAT_0919b4b8);
      pplStack_68 = &local_60;
      local_70 = 0;
      do {
        plVar1 = local_60;
        if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_60;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076afe80;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_60,DAT_09185b10,0);
LAB_076afe80:
        uVar5 = (*(code *)*puVar3)(plVar1,puVar3[1]);
        plVar1 = local_60;
        if ((uVar5 & 1) == 0) goto LAB_076aff80;
        if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *local_60;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917aca0) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076afee4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_60,DAT_0917aca0,0);
LAB_076afee4:
        lVar4 = (*(code *)*puVar3)(plVar1,puVar3[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((DAT_09522698 & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b7368);
          DAT_09522698 = 1;
        }
        if (*(int *)(lVar4 + 0x14) != 0) break;
        if ((*(ulong *)(lVar4 + 0x90) & 0xff) == 0) {
          uVar5 = 0;
        }
        else {
          local_78 = 0;
          FUN_05c30b18(&local_78,(uint)(*(ulong *)(lVar4 + 0x90) >> 0x20) & 2,DAT_091b6cd8);
          uVar5 = local_78;
        }
      } while ((uVar5 >> 0x20 != 2) || ((uVar5 & 0xff) == 0));
      local_78 = local_78 & 0xffffffffffff0000;
      FUN_05c290f8(&local_78,1,DAT_091b6a48);
      *(undefined2 *)(param_1 + 0xf9) = (undefined2)local_78;
LAB_076aff80:
      plVar1 = local_60;
      if (local_60 != (long *)0x0) {
        lVar4 = *local_60;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185a58) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076affe0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_60,DAT_09185a58,0);
LAB_076affe0:
        (*(code *)*puVar3)(plVar1,puVar3[1]);
      }
    }
    else {
      local_70 = local_70 & 0xffffffffffff0000;
      FUN_05c290f8(&local_70,1,DAT_091b6a48);
      *(undefined2 *)(param_1 + 0xf9) = (undefined2)local_70;
    }
  }
  return *(undefined1 *)(param_1 + 0xfa);
}


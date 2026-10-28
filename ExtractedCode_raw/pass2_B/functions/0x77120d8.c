// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$IsArray
// address: 0x77120d8
// body: available
// range: 0x77120d8-0x77123d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77123d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77123d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Converters_XmlNodeConverter__IsArray(undefined8 param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_78;
  undefined8 *puStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  
  if ((DAT_095229c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3248);
    FUN_03f5c2a4(&DAT_091a3250);
    FUN_03f5c2a4(&DAT_091a3258);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091ad7d0);
    FUN_03f5c2a4(&DAT_0918d4d8);
    FUN_03f5c2a4(&DAT_0921ce18);
    FUN_03f5c2a4(&DAT_091fbeb0);
    DAT_095229c7 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091869f8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_077121c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869f8,3);
LAB_077121c8:
    lVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (lVar6 != 0) {
      FUN_057e185c(&local_78,lVar6,DAT_091ad7d0);
      local_50 = local_68;
      uStack_58 = puStack_70;
      local_60 = local_78;
      local_78 = 0;
      puStack_70 = &local_60;
      do {
        do {
          uVar2 = FUN_071bd28c(&local_60,DAT_091a3250);
          plVar1 = local_50;
          if ((uVar2 & 1) == 0) {
            uVar3 = 0;
            goto LAB_077123a4;
          }
          if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *local_50;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_091869f8) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_07712290;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_50,DAT_091869f8,1);
LAB_07712290:
          uVar5 = (*(code *)*puVar4)(plVar1,puVar4[1]);
          uVar7 = System_String__op_Equality(uVar5,DAT_091fbeb0,0);
        } while ((uVar7 & 1) == 0);
        lVar6 = *plVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091869f8) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
              goto LAB_077122fc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091869f8,8);
LAB_077122fc:
        uVar5 = (*(code *)*puVar4)(plVar1,puVar4[1]);
        uVar7 = System_String__op_Equality(uVar5,DAT_0921ce18,0);
      } while ((uVar7 & 1) == 0);
      lVar6 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091869f8) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_07712370;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_091869f8,5);
LAB_07712370:
      uVar5 = (*(code *)*puVar4)(plVar1,puVar4[1]);
      if (*(int *)(DAT_0918d4d8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Xml_XmlConvert__ToBoolean(uVar5,0);
LAB_077123a4:
      FUN_071bd288(&local_60,DAT_091a3248);
      return uVar2 & uVar3 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


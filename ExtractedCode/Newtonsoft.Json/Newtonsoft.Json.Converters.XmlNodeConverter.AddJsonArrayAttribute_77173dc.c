// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$AddJsonArrayAttribute
// address: 0x77173dc
// body: available
// range: 0x77173dc-0x771771b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7717718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__AddJsonArrayAttribute
               (undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_095229d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869d0);
    FUN_03f5c2a4(&DAT_091869e0);
    FUN_03f5c2a4(&DAT_0918d2a8);
    FUN_03f5c2a4(&DAT_0921ce18);
    FUN_03f5c2a4(&DAT_0921ceb0);
    FUN_03f5c2a4(&DAT_0921ded0);
    FUN_03f5c2a4(&DAT_09224438);
    FUN_03f5c2a4(&DAT_09225c10);
    DAT_095229d3 = 1;
  }
  uVar2 = DAT_09224438;
  uVar1 = DAT_0921ded0;
  uVar4 = DAT_0921ce18;
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091869d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
          goto LAB_077174ec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,0xb);
LAB_077174ec:
    uVar4 = (*(code *)*puVar3)(param_3,uVar1,uVar4,uVar2,puVar3[1]);
    if (param_2 != (long *)0x0) {
      lVar5 = *param_2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091869e0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07717568;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869e0,0);
LAB_07717568:
      (*(code *)*puVar3)(param_2,uVar4,puVar3[1]);
      uVar4 = DAT_0921ce18;
      lVar5 = *param_2;
      if ((*(byte *)(DAT_0918d2a8 + 0x130) <= *(byte *)(lVar5 + 0x130)) &&
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_0918d2a8 + 0x130) * 8 + -8) ==
          DAT_0918d2a8)) {
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091869e0) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_077175f4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869e0,1);
LAB_077175f4:
        lVar5 = (*(code *)*puVar3)(param_2,uVar4,puVar3[1]);
        uVar2 = DAT_09225c10;
        uVar1 = DAT_0921ceb0;
        uVar4 = DAT_0921ce18;
        if (lVar5 == 0) {
          lVar5 = *param_3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091869d0) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
                goto LAB_0771768c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_091869d0,0xb);
LAB_0771768c:
          uVar4 = (*(code *)*puVar3)(param_3,uVar2,uVar1,uVar4,puVar3[1]);
          lVar5 = *param_2;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091869e0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_077176f4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869e0,0);
LAB_077176f4:
                    /* WARNING: Could not recover jumptable at 0x07717714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(param_2,uVar4,puVar3[1]);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


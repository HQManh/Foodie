// rea decompile_all
// name: Coffee.UIEffectInternal.MinMax01$$.ctor
// address: 0x43e5acc
// body: available
// range: 0x43e5acc-0x43e5b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_MinMax01___ctor(float param_1,float param_2,undefined8 *param_3)

{
  ulong uVar1;
  float fVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar3 = NEON_fmov(0x3f800000,4);
  uVar6 = NEON_rev64(CONCAT44(param_2,param_1),4);
  uVar1 = CONCAT44(param_1,param_1) ^
          (CONCAT44(param_1,param_1) ^ CONCAT44(param_2,param_2)) &
          ~CONCAT44(-(uint)(param_2 < (float)((ulong)uVar6 >> 0x20)),-(uint)(param_1 < (float)uVar6)
                   );
  fVar2 = (float)(uVar1 >> 0x20);
  iVar4 = -(uint)((float)uVar1 < 0.0);
  iVar5 = -(uint)(fVar2 < 0.0);
  uVar1 = uVar1 ^ (uVar1 ^ uVar3) &
                  CONCAT44(-(uint)((float)(uVar3 >> 0x20) < fVar2),
                           -(uint)((float)uVar3 < (float)uVar1));
  *param_3 = CONCAT17((byte)(uVar1 >> 0x38) & ~(byte)((uint)iVar5 >> 0x18),
                      CONCAT16((byte)(uVar1 >> 0x30) & ~(byte)((uint)iVar5 >> 0x10),
                               CONCAT15((byte)(uVar1 >> 0x28) & ~(byte)((uint)iVar5 >> 8),
                                        CONCAT14((byte)(uVar1 >> 0x20) & ~(byte)iVar5,
                                                 CONCAT13((byte)(uVar1 >> 0x18) &
                                                          ~(byte)((uint)iVar4 >> 0x18),
                                                          CONCAT12((byte)(uVar1 >> 0x10) &
                                                                   ~(byte)((uint)iVar4 >> 0x10),
                                                                   CONCAT11((byte)(uVar1 >> 8) &
                                                                            ~(byte)((uint)iVar4 >> 8
                                                                                   ),(byte)uVar1 &
                                                                                     ~(byte)iVar4)))
                                                ))));
  return;
}

